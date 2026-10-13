package ws;

import java.io.IOException;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import okio.ByteString;

/* loaded from: classes3.dex */
public abstract class f {
    public static final c[] a;

    /* renamed from: b, reason: collision with root package name */
    public static final Map f20088b;

    static {
        c cVar = new c(c.f20072i, "");
        ByteString byteString = c.f20069f;
        c cVar2 = new c(byteString, "GET");
        c cVar3 = new c(byteString, "POST");
        ByteString byteString2 = c.f20070g;
        c cVar4 = new c(byteString2, "/");
        c cVar5 = new c(byteString2, "/index.html");
        ByteString byteString3 = c.f20071h;
        c cVar6 = new c(byteString3, "http");
        c cVar7 = new c(byteString3, "https");
        ByteString byteString4 = c.f20068e;
        c[] cVarArr = {cVar, cVar2, cVar3, cVar4, cVar5, cVar6, cVar7, new c(byteString4, "200"), new c(byteString4, "204"), new c(byteString4, "206"), new c(byteString4, "304"), new c(byteString4, "400"), new c(byteString4, "404"), new c(byteString4, "500"), new c("accept-charset", ""), new c("accept-encoding", "gzip, deflate"), new c("accept-language", ""), new c("accept-ranges", ""), new c("accept", ""), new c("access-control-allow-origin", ""), new c("age", ""), new c("allow", ""), new c("authorization", ""), new c("cache-control", ""), new c("content-disposition", ""), new c("content-encoding", ""), new c("content-language", ""), new c("content-length", ""), new c("content-location", ""), new c("content-range", ""), new c("content-type", ""), new c("cookie", ""), new c("date", ""), new c("etag", ""), new c("expect", ""), new c("expires", ""), new c("from", ""), new c("host", ""), new c("if-match", ""), new c("if-modified-since", ""), new c("if-none-match", ""), new c("if-range", ""), new c("if-unmodified-since", ""), new c("last-modified", ""), new c("link", ""), new c("location", ""), new c("max-forwards", ""), new c("proxy-authenticate", ""), new c("proxy-authorization", ""), new c("range", ""), new c("referer", ""), new c("refresh", ""), new c("retry-after", ""), new c("server", ""), new c("set-cookie", ""), new c("strict-transport-security", ""), new c("transfer-encoding", ""), new c("user-agent", ""), new c("vary", ""), new c("via", ""), new c("www-authenticate", "")};
        a = cVarArr;
        LinkedHashMap linkedHashMap = new LinkedHashMap(61);
        int i5 = 0;
        while (i5 < 61) {
            int i6 = i5 + 1;
            if (!linkedHashMap.containsKey(cVarArr[i5].a)) {
                linkedHashMap.put(cVarArr[i5].a, Integer.valueOf(i5));
            }
            i5 = i6;
        }
        Map unmodifiableMap = Collections.unmodifiableMap(linkedHashMap);
        Intrinsics.checkNotNullExpressionValue(unmodifiableMap, "unmodifiableMap(result)");
        f20088b = unmodifiableMap;
    }

    public static void a(ByteString name) {
        Intrinsics.checkNotNullParameter(name, "name");
        int c6 = name.c();
        int i5 = 0;
        while (i5 < c6) {
            int i6 = i5 + 1;
            byte f2 = name.f(i5);
            if (65 <= f2 && f2 <= 90) {
                throw new IOException(Intrinsics.stringPlus("PROTOCOL_ERROR response malformed: mixed case name: ", name.k()));
            }
            i5 = i6;
        }
    }
}
