package ct;

import a3.e;
import e4.f;
import java.security.cert.Certificate;
import java.security.cert.CertificateParsingException;
import java.security.cert.X509Certificate;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLException;
import javax.net.ssl.SSLSession;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kotlin.text.x;
import s4.h;

/* loaded from: classes3.dex */
public final class c implements HostnameVerifier {
    public static final c a = new c();

    public static List a(X509Certificate x509Certificate, int i5) {
        Object obj;
        try {
            Collection<List<?>> subjectAlternativeNames = x509Certificate.getSubjectAlternativeNames();
            if (subjectAlternativeNames == null) {
                return m0.f13512d;
            }
            ArrayList arrayList = new ArrayList();
            for (List<?> list : subjectAlternativeNames) {
                if (list != null && list.size() >= 2 && Intrinsics.areEqual(list.get(0), Integer.valueOf(i5)) && (obj = list.get(1)) != null) {
                    arrayList.add((String) obj);
                }
            }
            return arrayList;
        } catch (CertificateParsingException unused) {
            return m0.f13512d;
        }
    }

    public static boolean b(String str) {
        int i5;
        int length = str.length();
        int length2 = str.length();
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (length2 < 0) {
            throw new IllegalArgumentException(h.e(length2, "endIndex < beginIndex: ", " < 0").toString());
        }
        if (length2 > str.length()) {
            StringBuilder r5 = e.r(length2, "endIndex > string.length: ", " > ");
            r5.append(str.length());
            throw new IllegalArgumentException(r5.toString().toString());
        }
        long j = 0;
        int i6 = 0;
        while (i6 < length2) {
            char charAt = str.charAt(i6);
            if (charAt < 128) {
                j++;
            } else {
                if (charAt < 2048) {
                    i5 = 2;
                } else if (charAt < 55296 || charAt > 57343) {
                    i5 = 3;
                } else {
                    int i10 = i6 + 1;
                    char charAt2 = i10 < length2 ? str.charAt(i10) : (char) 0;
                    if (charAt > 56319 || charAt2 < 56320 || charAt2 > 57343) {
                        j++;
                        i6 = i10;
                    } else {
                        j += 4;
                        i6 += 2;
                    }
                }
                j += i5;
            }
            i6++;
        }
        return length == ((int) j);
    }

    /* JADX WARN: Removed duplicated region for block: B:57:0x0128 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:58:? A[LOOP:1: B:26:0x006d->B:58:?, LOOP_END, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static boolean c(String host, X509Certificate certificate) {
        boolean z5;
        int length;
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(certificate, "certificate");
        byte[] bArr = qs.b.a;
        Intrinsics.checkNotNullParameter(host, "<this>");
        if (qs.b.f17055f.d(host)) {
            String M = f.M(host);
            List a10 = a(certificate, 7);
            if (a10 == null || !a10.isEmpty()) {
                Iterator it = a10.iterator();
                while (it.hasNext()) {
                    if (Intrinsics.areEqual(M, f.M((String) it.next()))) {
                        return true;
                    }
                }
            }
            return false;
        }
        if (b(host)) {
            Locale locale = Locale.US;
            host = e.o(locale, "US", host, locale, "this as java.lang.String).toLowerCase(locale)");
        }
        List<String> a11 = a(certificate, 2);
        if (a11 == null || !a11.isEmpty()) {
            for (String str : a11) {
                if (host != null && host.length() != 0 && !x.o(host, ".", false) && !x.h(host, "..", false) && str != null && str.length() != 0 && !x.o(str, ".", false) && !x.h(str, "..", false)) {
                    String stringPlus = !x.h(host, ".", false) ? Intrinsics.stringPlus(host, ".") : host;
                    if (!x.h(str, ".", false)) {
                        str = Intrinsics.stringPlus(str, ".");
                    }
                    if (b(str)) {
                        Locale locale2 = Locale.US;
                        str = e.o(locale2, "US", str, locale2, "this as java.lang.String).toLowerCase(locale)");
                    }
                    if (!StringsKt.D(str, "*", false)) {
                        z5 = Intrinsics.areEqual(stringPlus, str);
                    } else if (x.o(str, "*.", false) && StringsKt.I(str, '*', 1, 4) == -1 && stringPlus.length() >= str.length() && !Intrinsics.areEqual("*.", str)) {
                        String substring = str.substring(1);
                        Intrinsics.checkNotNullExpressionValue(substring, "this as java.lang.String).substring(startIndex)");
                        if (x.h(stringPlus, substring, false) && ((length = stringPlus.length() - substring.length()) <= 0 || StringsKt.L('.', length - 1, 4, stringPlus) == -1)) {
                            z5 = true;
                        }
                    }
                    if (!z5) {
                        return true;
                    }
                }
                z5 = false;
                if (!z5) {
                }
            }
        }
        return false;
    }

    @Override // javax.net.ssl.HostnameVerifier
    public final boolean verify(String host, SSLSession session) {
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(session, "session");
        if (b(host)) {
            try {
                Certificate certificate = session.getPeerCertificates()[0];
                if (certificate != null) {
                    return c(host, (X509Certificate) certificate);
                }
                throw new NullPointerException("null cannot be cast to non-null type java.security.cert.X509Certificate");
            } catch (SSLException unused) {
            }
        }
        return false;
    }
}
