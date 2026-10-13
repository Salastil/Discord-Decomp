package xh;

import com.google.android.play.core.integrity.IntegrityTokenRequest;

/* loaded from: classes3.dex */
public final class q extends IntegrityTokenRequest {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final Long f20488b;

    public q(String str, Long l6) {
        this.a = str;
        this.f20488b = l6;
    }

    @Override // com.google.android.play.core.integrity.IntegrityTokenRequest
    public final Long a() {
        return this.f20488b;
    }

    @Override // com.google.android.play.core.integrity.IntegrityTokenRequest
    public final String b() {
        return this.a;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof IntegrityTokenRequest)) {
            return false;
        }
        IntegrityTokenRequest integrityTokenRequest = (IntegrityTokenRequest) obj;
        if (!this.a.equals(integrityTokenRequest.b())) {
            return false;
        }
        Long l6 = this.f20488b;
        return l6 == null ? integrityTokenRequest.a() == null : l6.equals(integrityTokenRequest.a());
    }

    public final int hashCode() {
        int hashCode = this.a.hashCode() ^ 1000003;
        Long l6 = this.f20488b;
        return (hashCode * 1000003) ^ (l6 == null ? 0 : l6.hashCode());
    }

    public final String toString() {
        return "IntegrityTokenRequest{nonce=" + this.a + ", cloudProjectNumber=" + this.f20488b + "}";
    }
}
