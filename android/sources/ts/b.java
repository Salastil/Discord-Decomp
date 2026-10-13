package ts;

import androidx.appcompat.widget.m3;
import java.net.UnknownServiceException;
import java.util.Arrays;
import java.util.List;
import javax.net.ssl.SSLSocket;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b {
    public final List a;

    /* renamed from: b, reason: collision with root package name */
    public int f18701b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f18702c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f18703d;

    public b(List connectionSpecs) {
        Intrinsics.checkNotNullParameter(connectionSpecs, "connectionSpecs");
        this.a = connectionSpecs;
    }

    public final ps.m a(SSLSocket sslSocket) {
        ps.m connectionSpec;
        int i5;
        boolean z5;
        String[] cipherSuitesIntersection;
        String[] tlsVersionsIntersection;
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        int i6 = this.f18701b;
        List list = this.a;
        int size = list.size();
        while (true) {
            if (i6 >= size) {
                connectionSpec = null;
                break;
            }
            int i10 = i6 + 1;
            connectionSpec = (ps.m) list.get(i6);
            if (connectionSpec.b(sslSocket)) {
                this.f18701b = i10;
                break;
            }
            i6 = i10;
        }
        if (connectionSpec == null) {
            StringBuilder sb2 = new StringBuilder("Unable to find acceptable protocols. isFallback=");
            sb2.append(this.f18703d);
            sb2.append(", modes=");
            sb2.append(list);
            sb2.append(", supported protocols=");
            String[] enabledProtocols = sslSocket.getEnabledProtocols();
            Intrinsics.checkNotNull(enabledProtocols);
            String arrays = Arrays.toString(enabledProtocols);
            Intrinsics.checkNotNullExpressionValue(arrays, "toString(this)");
            sb2.append(arrays);
            throw new UnknownServiceException(sb2.toString());
        }
        int i11 = this.f18701b;
        int size2 = list.size();
        while (true) {
            i5 = 0;
            if (i11 >= size2) {
                z5 = false;
                break;
            }
            int i12 = i11 + 1;
            if (((ps.m) list.get(i11)).b(sslSocket)) {
                z5 = true;
                break;
            }
            i11 = i12;
        }
        this.f18702c = z5;
        boolean z6 = this.f18703d;
        Intrinsics.checkNotNullParameter(sslSocket, "sslSocket");
        String[] strArr = connectionSpec.f16570d;
        String[] strArr2 = connectionSpec.f16569c;
        if (strArr2 != null) {
            String[] enabledCipherSuites = sslSocket.getEnabledCipherSuites();
            Intrinsics.checkNotNullExpressionValue(enabledCipherSuites, "sslSocket.enabledCipherSuites");
            cipherSuitesIntersection = qs.b.o(enabledCipherSuites, strArr2, ps.l.f16550c);
        } else {
            cipherSuitesIntersection = sslSocket.getEnabledCipherSuites();
        }
        if (strArr != null) {
            String[] enabledProtocols2 = sslSocket.getEnabledProtocols();
            Intrinsics.checkNotNullExpressionValue(enabledProtocols2, "sslSocket.enabledProtocols");
            ho.b bVar = ho.b.f10142d;
            Intrinsics.checkNotNull(bVar, "null cannot be cast to non-null type java.util.Comparator<T of kotlin.comparisons.ComparisonsKt__ComparisonsKt.naturalOrder>");
            tlsVersionsIntersection = qs.b.o(enabledProtocols2, strArr, bVar);
        } else {
            tlsVersionsIntersection = sslSocket.getEnabledProtocols();
        }
        String[] supportedCipherSuites = sslSocket.getSupportedCipherSuites();
        Intrinsics.checkNotNullExpressionValue(supportedCipherSuites, "supportedCipherSuites");
        ps.k comparator = ps.l.f16550c;
        byte[] bArr = qs.b.a;
        Intrinsics.checkNotNullParameter(supportedCipherSuites, "<this>");
        Intrinsics.checkNotNullParameter("TLS_FALLBACK_SCSV", "value");
        Intrinsics.checkNotNullParameter(comparator, "comparator");
        int length = supportedCipherSuites.length;
        while (true) {
            if (i5 >= length) {
                i5 = -1;
                break;
            }
            if (comparator.compare(supportedCipherSuites[i5], "TLS_FALLBACK_SCSV") == 0) {
                break;
            }
            i5++;
        }
        if (z6 && i5 != -1) {
            Intrinsics.checkNotNullExpressionValue(cipherSuitesIntersection, "cipherSuitesIntersection");
            String value = supportedCipherSuites[i5];
            Intrinsics.checkNotNullExpressionValue(value, "supportedCipherSuites[indexOfFallbackScsv]");
            Intrinsics.checkNotNullParameter(cipherSuitesIntersection, "<this>");
            Intrinsics.checkNotNullParameter(value, "value");
            Object[] copyOf = Arrays.copyOf(cipherSuitesIntersection, cipherSuitesIntersection.length + 1);
            Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, newSize)");
            cipherSuitesIntersection = (String[]) copyOf;
            Intrinsics.checkNotNullParameter(cipherSuitesIntersection, "<this>");
            cipherSuitesIntersection[cipherSuitesIntersection.length - 1] = value;
        }
        Intrinsics.checkNotNullParameter(connectionSpec, "connectionSpec");
        m3 m3Var = new m3();
        m3Var.a = connectionSpec.a;
        m3Var.f1037c = strArr2;
        m3Var.f1038d = strArr;
        m3Var.f1036b = connectionSpec.f16568b;
        Intrinsics.checkNotNullExpressionValue(cipherSuitesIntersection, "cipherSuitesIntersection");
        m3Var.b((String[]) Arrays.copyOf(cipherSuitesIntersection, cipherSuitesIntersection.length));
        Intrinsics.checkNotNullExpressionValue(tlsVersionsIntersection, "tlsVersionsIntersection");
        m3Var.e((String[]) Arrays.copyOf(tlsVersionsIntersection, tlsVersionsIntersection.length));
        ps.m a = m3Var.a();
        if (a.c() != null) {
            sslSocket.setEnabledProtocols(a.f16570d);
        }
        if (a.a() != null) {
            sslSocket.setEnabledCipherSuites(a.f16569c);
        }
        return connectionSpec;
    }
}
