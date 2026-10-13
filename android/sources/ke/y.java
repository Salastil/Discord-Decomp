package ke;

import android.os.Handler;
import android.os.Looper;

/* loaded from: classes3.dex */
public final class y {
    public static final y a = new y();

    public final a0 a(Looper looper, Handler.Callback callback) {
        return new a0(new Handler(looper, callback));
    }
}
