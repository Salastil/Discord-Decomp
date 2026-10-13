package us;

import io.sentry.hints.j;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.regex.Pattern;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import okhttp3.Cookie;
import okhttp3.CookieJar;
import okhttp3.Headers;
import okhttp3.HttpUrl;
import okhttp3.Response;
import okio.ByteString;

/* loaded from: classes3.dex */
public abstract class e {
    static {
        ByteString byteString = ByteString.f16115v;
        j.D("\"\\");
        j.D("\t ,=");
    }

    public static final boolean a(Response response) {
        Intrinsics.checkNotNullParameter(response, "<this>");
        if (Intrinsics.areEqual(response.f16085d.f16076b, "HEAD")) {
            return false;
        }
        int i5 = response.f16088v;
        return (((i5 >= 100 && i5 < 200) || i5 == 204 || i5 == 304) && qs.b.j(response) == -1 && !"chunked".equalsIgnoreCase(response.f("Transfer-Encoding", null))) ? false : true;
    }

    public static final void b(CookieJar cookieJar, HttpUrl url, Headers headers) {
        List list;
        Intrinsics.checkNotNullParameter(cookieJar, "<this>");
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(headers, "headers");
        if (cookieJar == CookieJar.f16025q) {
            return;
        }
        Pattern pattern = Cookie.j;
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(headers, "headers");
        List i5 = headers.i("Set-Cookie");
        int size = i5.size();
        ArrayList arrayList = null;
        int i6 = 0;
        while (i6 < size) {
            int i10 = i6 + 1;
            Cookie v5 = com.facebook.imagepipeline.nativecode.b.v(url, (String) i5.get(i6));
            if (v5 != null) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add(v5);
            }
            i6 = i10;
        }
        if (arrayList != null) {
            list = Collections.unmodifiableList(arrayList);
            Intrinsics.checkNotNullExpressionValue(list, "{\n        Collections.un…ableList(cookies)\n      }");
        } else {
            list = m0.f13512d;
        }
        if (list.isEmpty()) {
            return;
        }
        cookieJar.saveFromResponse(url, list);
    }
}
