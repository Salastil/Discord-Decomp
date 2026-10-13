package ve;

import android.content.Context;
import java.util.Iterator;
import java.util.Set;

/* loaded from: classes3.dex */
public abstract class h {
    public static final a1.d a = new a1.d("GoogleSignInCommon", new String[0]);

    public static void a(Context context) {
        i.t(context).u();
        Set set = ze.l.a;
        synchronized (set) {
        }
        Iterator it = set.iterator();
        if (it.hasNext()) {
            ((ze.l) it.next()).getClass();
            throw new UnsupportedOperationException();
        }
        af.e.a();
    }
}
