package okhttp3;

import java.util.List;
import ps.o;

/* loaded from: classes3.dex */
public interface CookieJar {

    /* renamed from: q, reason: collision with root package name */
    public static final o f16025q = new o();

    List loadForRequest(HttpUrl httpUrl);

    void saveFromResponse(HttpUrl httpUrl, List list);
}
