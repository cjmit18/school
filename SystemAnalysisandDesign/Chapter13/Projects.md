1. Create a simulated cyberattack scenario based on a chosen attacker profile. Conduct a risk assessment for the scenario, identifying potential vulnerabilities and proposing mitigation strategies.

### Simulated Cyberattack Risk Assessment

#### Attacker Profile: Disgruntled Former Employee

**Motivation:** Revenge against former employer **Target:** Mid-sized financial services firm

#### The Attack Scenario

A recently terminated IT administrator uses credentials that were never deactivated to remotely access the company's internal systems. Leveraging their insider knowledge, they delete critical financial records, exfiltrate sensitive client data, and corrupt backup files before their access is finally detected.

#### Risk Assessment

|Vulnerability|Likelihood|Impact|Risk Level|
|---|---|---|---|
|Failure to revoke access credentials promptly|High|Critical|Critical|
|Insufficient monitoring of privileged accounts|High|High|Critical|
|Unprotected backup systems|Medium|Critical|High|

#### Mitigation Strategies

- **Immediate Access Revocation** — Establish a formal offboarding procedure that immediately deactivates all credentials and access privileges upon an employee's termination.
- **Privileged Account Monitoring** — Deploy monitoring tools that flag unusual activity on administrator accounts, enabling rapid detection and response.
- **Backup Protection** — Store backups in isolated, access-restricted environments to prevent insider tampering, ensuring recovery options remain intact in the event of an attack.

#### Conclusion

Insider threats are particularly dangerous due to the attacker's existing knowledge of systems and trust levels. Strict access management and proactive monitoring are the most effective defenses against this profile.