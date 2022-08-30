# StrandHogg2
- Poc for StrandHogg2 (CVE-2020-0096)
# Information of the original vulnerability
## Current Description
- In startActivities of ActivityStartController.java, there is a possible escalation of privilege due to a confused deputy. This could lead to local escalation of privilege with no additional execution privileges needed. User interaction is not needed for exploitation.Product: AndroidVersions: Android-8.0 Android-8.1 Android-9Android ID: A-145669109
## Severity
- CVSS 3.x Severity and Metrics:
    - Base Score: 7.8 HIGH
    - Vector:  CVSS:3.1/AV:L/AC:L/PR:L/UI:N/S:U/C:H/I:H/A:H
## References
- https://source.android.com/security/bulletin/2020-05-01