package ti;

import j$.util.DesugarTimeZone;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Locale;
import ri.f;
import ri.g;

/* loaded from: classes3.dex */
public final class c implements f {
    public static final SimpleDateFormat a;

    static {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss.SSS'Z'", Locale.US);
        a = simpleDateFormat;
        simpleDateFormat.setTimeZone(DesugarTimeZone.getTimeZone("UTC"));
    }

    @Override // ri.a
    public final void a(Object obj, Object obj2) {
        ((g) obj2).b(a.format((Date) obj));
    }
}
