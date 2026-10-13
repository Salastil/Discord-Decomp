package okhttp3;

import com.facebook.react.devsupport.StackTraceHelper;
import java.nio.charset.Charset;
import java.util.regex.Pattern;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class MediaType {

    /* renamed from: d, reason: collision with root package name */
    public static final Pattern f16040d = Pattern.compile("([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)/([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)");

    /* renamed from: e, reason: collision with root package name */
    public static final Pattern f16041e = Pattern.compile(";\\s*(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)=(?:([a-zA-Z0-9-!#$%&'*+.^_`{|}~]+)|\"([^\"]*)\"))?");
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final String f16042b;

    /* renamed from: c, reason: collision with root package name */
    public final String[] f16043c;

    public MediaType(String str, String str2, String[] strArr) {
        this.a = str;
        this.f16042b = str2;
        this.f16043c = strArr;
    }

    /* JADX WARN: Removed duplicated region for block: B:11:0x002b A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:13:0x002c A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Charset a(Charset charset) {
        String str;
        Intrinsics.checkNotNullParameter("charset", StackTraceHelper.NAME_KEY);
        String[] strArr = this.f16043c;
        int i5 = 0;
        int a = no.c.a(0, strArr.length - 1, 2);
        if (a >= 0) {
            while (true) {
                int i6 = i5 + 2;
                if (x.i(strArr[i5], "charset", true)) {
                    str = strArr[i5 + 1];
                    break;
                }
                if (i5 == a) {
                    break;
                }
                i5 = i6;
            }
            if (str != null) {
                return charset;
            }
            try {
                return Charset.forName(str);
            } catch (IllegalArgumentException unused) {
                return charset;
            }
        }
        str = null;
        if (str != null) {
        }
    }

    public final boolean equals(Object obj) {
        return (obj instanceof MediaType) && Intrinsics.areEqual(((MediaType) obj).a, this.a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return this.a;
    }
}
