SELECT contest_id, hacker_id, name, SUM(sum_total_submissions),SUM(sum_totalaccepted_submissions),SUM(sum_total_views),SUM(sum_total_unique_views) FROM (

SELECT ct.contest_id, ct.hacker_id, ct.name, cs.college_id, ch.challenge_id,
(SELECT IFNULL(SUM(ss.total_submissions), 0) FROM Submission_Stats ss WHERE ss.challenge_id=ch.challenge_id) AS sum_total_submissions,
(SELECT IFNULL(SUM(ss.total_accepted_submissions), 0) FROM Submission_Stats ss WHERE ss.challenge_id=ch.challenge_id) AS sum_totalaccepted_submissions,
(SELECT IFNULL(SUM(vs.total_views), 0) FROM View_Stats vs WHERE vs.challenge_id=ch.challenge_id) AS sum_total_views,
(SELECT IFNULL(SUM(vs.total_unique_views), 0) FROM View_Stats vs WHERE vs.challenge_id=ch.challenge_id) AS sum_total_unique_views
FROM Contests ct
JOIN Colleges cs ON cs.contest_id=ct.contest_id
JOIN Challenges ch ON ch.college_id=cs.college_id

ORDER BY ct.contest_id,ct.hacker_id

) AS tmp GROUP BY contest_id, hacker_id, name ORDER BY contest_id;
