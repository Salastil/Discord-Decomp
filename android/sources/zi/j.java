package zi;

import android.text.TextUtils;
import java.util.concurrent.TimeUnit;
import java.util.regex.Pattern;

/* loaded from: classes3.dex */
public final class j {

    /* renamed from: b, reason: collision with root package name */
    public static final long f21265b = TimeUnit.HOURS.toSeconds(1);

    /* renamed from: c, reason: collision with root package name */
    public static final Pattern f21266c = Pattern.compile("\\AA[\\w-]{38}\\z");

    /* renamed from: d, reason: collision with root package name */
    public static j f21267d;
    public final wi.d a;

    public j(wi.d dVar) {
        this.a = dVar;
    }

    public final boolean a(aj.b bVar) {
        if (TextUtils.isEmpty(bVar.f642c)) {
            return true;
        }
        long j = bVar.f645f + bVar.f644e;
        TimeUnit timeUnit = TimeUnit.MILLISECONDS;
        this.a.getClass();
        return j < timeUnit.toSeconds(System.currentTimeMillis()) + f21265b;
    }
}
