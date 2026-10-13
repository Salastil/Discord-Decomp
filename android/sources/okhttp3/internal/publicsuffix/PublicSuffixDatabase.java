package okhttp3.internal.publicsuffix;

import et.k;
import et.r;
import et.y;
import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.net.IDN;
import java.nio.charset.Charset;
import java.nio.charset.StandardCharsets;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicBoolean;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import kr.s;
import l8.a;
import ys.n;

@Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0004\u0018\u00002\u00020\u0001:\u0001\u0004B\u0007¢\u0006\u0004\b\u0002\u0010\u0003¨\u0006\u0005"}, d2 = {"Lokhttp3/internal/publicsuffix/PublicSuffixDatabase;", "", "<init>", "()V", "l8/a", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class PublicSuffixDatabase {

    /* renamed from: e, reason: collision with root package name */
    public static final byte[] f16107e = {42};

    /* renamed from: f, reason: collision with root package name */
    public static final List f16108f = b0.c("*");

    /* renamed from: g, reason: collision with root package name */
    public static final PublicSuffixDatabase f16109g = new PublicSuffixDatabase();
    public final AtomicBoolean a = new AtomicBoolean(false);

    /* renamed from: b, reason: collision with root package name */
    public final CountDownLatch f16110b = new CountDownLatch(1);

    /* renamed from: c, reason: collision with root package name */
    public byte[] f16111c;

    /* renamed from: d, reason: collision with root package name */
    public byte[] f16112d;

    public static List c(String str) {
        List S = StringsKt.S(str, new char[]{'.'});
        return Intrinsics.areEqual(CollectionsKt.Q(S), "") ? CollectionsKt.G(S) : S;
    }

    public final String a(String domain) {
        String str;
        String str2;
        String str3;
        List S;
        int size;
        int size2;
        Intrinsics.checkNotNullParameter(domain, "domain");
        String unicodeDomain = IDN.toUnicode(domain);
        Intrinsics.checkNotNullExpressionValue(unicodeDomain, "unicodeDomain");
        List c6 = c(unicodeDomain);
        if (this.a.get() || !this.a.compareAndSet(false, true)) {
            try {
                this.f16110b.await();
            } catch (InterruptedException unused) {
                Thread.currentThread().interrupt();
            }
        } else {
            boolean z5 = false;
            while (true) {
                try {
                    try {
                        b();
                        break;
                    } finally {
                        if (z5) {
                            Thread.currentThread().interrupt();
                        }
                    }
                } catch (InterruptedIOException unused2) {
                    Thread.interrupted();
                    z5 = true;
                } catch (IOException e9) {
                    n nVar = n.a;
                    n.a.getClass();
                    n.i(5, "Failed to read public suffix list", e9);
                    if (z5) {
                    }
                }
            }
        }
        if (this.f16111c == null) {
            throw new IllegalStateException("Unable to load publicsuffixes.gz resource from the classpath.");
        }
        int size3 = c6.size();
        byte[][] bArr = new byte[size3][];
        for (int i5 = 0; i5 < size3; i5++) {
            String str4 = (String) c6.get(i5);
            Charset UTF_8 = StandardCharsets.UTF_8;
            Intrinsics.checkNotNullExpressionValue(UTF_8, "UTF_8");
            byte[] bytes = str4.getBytes(UTF_8);
            Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
            bArr[i5] = bytes;
        }
        int i6 = 0;
        while (true) {
            if (i6 >= size3) {
                str = null;
                break;
            }
            int i10 = i6 + 1;
            byte[] bArr2 = this.f16111c;
            if (bArr2 == null) {
                Intrinsics.throwUninitializedPropertyAccessException("publicSuffixListBytes");
                bArr2 = null;
            }
            str = a.g(bArr2, bArr, i6);
            if (str != null) {
                break;
            }
            i6 = i10;
        }
        if (size3 > 1) {
            byte[][] bArr3 = (byte[][]) bArr.clone();
            int length = bArr3.length - 1;
            int i11 = 0;
            while (i11 < length) {
                int i12 = i11 + 1;
                bArr3[i11] = f16107e;
                byte[] bArr4 = this.f16111c;
                if (bArr4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("publicSuffixListBytes");
                    bArr4 = null;
                }
                str2 = a.g(bArr4, bArr3, i11);
                if (str2 != null) {
                    break;
                }
                i11 = i12;
            }
        }
        str2 = null;
        if (str2 != null) {
            int i13 = size3 - 1;
            int i14 = 0;
            while (i14 < i13) {
                int i15 = i14 + 1;
                byte[] bArr5 = this.f16112d;
                if (bArr5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("publicSuffixExceptionListBytes");
                    bArr5 = null;
                }
                str3 = a.g(bArr5, bArr, i14);
                if (str3 != null) {
                    break;
                }
                i14 = i15;
            }
        }
        str3 = null;
        if (str3 != null) {
            S = StringsKt.S(Intrinsics.stringPlus("!", str3), new char[]{'.'});
        } else if (str == null && str2 == null) {
            S = f16108f;
        } else {
            List S2 = str == null ? null : StringsKt.S(str, new char[]{'.'});
            if (S2 == null) {
                S2 = m0.f13512d;
            }
            S = str2 == null ? null : StringsKt.S(str2, new char[]{'.'});
            if (S == null) {
                S = m0.f13512d;
            }
            if (S2.size() > S.size()) {
                S = S2;
            }
        }
        if (c6.size() == S.size() && ((String) S.get(0)).charAt(0) != '!') {
            return null;
        }
        if (((String) S.get(0)).charAt(0) == '!') {
            size = c6.size();
            size2 = S.size();
        } else {
            size = c6.size();
            size2 = S.size() + 1;
        }
        return s.m(s.g(CollectionsKt.C(c(domain)), size - size2), ".");
    }

    public final void b() {
        InputStream resourceAsStream = PublicSuffixDatabase.class.getResourceAsStream("publicsuffixes.gz");
        if (resourceAsStream == null) {
            return;
        }
        r d6 = y.d(new k(y.m(resourceAsStream)));
        try {
            long readInt = d6.readInt();
            d6.e0(readInt);
            byte[] A = d6.f8273e.A(readInt);
            long readInt2 = d6.readInt();
            d6.e0(readInt2);
            byte[] A2 = d6.f8273e.A(readInt2);
            Unit unit = Unit.a;
            d6.close();
            synchronized (this) {
                Intrinsics.checkNotNull(A);
                this.f16111c = A;
                Intrinsics.checkNotNull(A2);
                this.f16112d = A2;
            }
            this.f16110b.countDown();
        } finally {
        }
    }
}
