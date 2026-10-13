package ps;

import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.List;
import kotlin.collections.d0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q {
    public final w a;

    /* renamed from: b, reason: collision with root package name */
    public final l f16575b;

    /* renamed from: c, reason: collision with root package name */
    public final List f16576c;

    /* renamed from: d, reason: collision with root package name */
    public final fo.u f16577d;

    public q(w tlsVersion, l cipherSuite, List localCertificates, Function0 peerCertificatesFn) {
        Intrinsics.checkNotNullParameter(tlsVersion, "tlsVersion");
        Intrinsics.checkNotNullParameter(cipherSuite, "cipherSuite");
        Intrinsics.checkNotNullParameter(localCertificates, "localCertificates");
        Intrinsics.checkNotNullParameter(peerCertificatesFn, "peerCertificatesFn");
        this.a = tlsVersion;
        this.f16575b = cipherSuite;
        this.f16576c = localCertificates;
        this.f16577d = fo.l.a(new a3.q(peerCertificatesFn));
    }

    public final List a() {
        return (List) this.f16577d.getValue();
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof q)) {
            return false;
        }
        q qVar = (q) obj;
        return qVar.a == this.a && Intrinsics.areEqual(qVar.f16575b, this.f16575b) && Intrinsics.areEqual(qVar.a(), a()) && Intrinsics.areEqual(qVar.f16576c, this.f16576c);
    }

    public final int hashCode() {
        return this.f16576c.hashCode() + ((a().hashCode() + ((this.f16575b.hashCode() + ((this.a.hashCode() + 527) * 31)) * 31)) * 31);
    }

    public final String toString() {
        String type;
        String type2;
        List<Certificate> a = a();
        ArrayList arrayList = new ArrayList(d0.l(a, 10));
        for (Certificate certificate : a) {
            if (certificate instanceof X509Certificate) {
                type2 = ((X509Certificate) certificate).getSubjectDN().toString();
            } else {
                type2 = certificate.getType();
                Intrinsics.checkNotNullExpressionValue(type2, "type");
            }
            arrayList.add(type2);
        }
        String obj = arrayList.toString();
        StringBuilder sb2 = new StringBuilder("Handshake{tlsVersion=");
        sb2.append(this.a);
        sb2.append(" cipherSuite=");
        sb2.append(this.f16575b);
        sb2.append(" peerCertificates=");
        sb2.append(obj);
        sb2.append(" localCertificates=");
        List<Certificate> list = this.f16576c;
        ArrayList arrayList2 = new ArrayList(d0.l(list, 10));
        for (Certificate certificate2 : list) {
            if (certificate2 instanceof X509Certificate) {
                type = ((X509Certificate) certificate2).getSubjectDN().toString();
            } else {
                type = certificate2.getType();
                Intrinsics.checkNotNullExpressionValue(type, "type");
            }
            arrayList2.add(type);
        }
        sb2.append(arrayList2);
        sb2.append('}');
        return sb2.toString();
    }
}
