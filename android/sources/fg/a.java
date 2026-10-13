package fg;

import android.os.Handler;
import android.os.Looper;

/* loaded from: classes3.dex */
public class a extends Handler {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(Looper looper, int i5) {
        super(looper);
        switch (i5) {
            case 3:
                super(looper);
                Looper.getMainLooper();
                break;
            default:
                Looper.getMainLooper();
                break;
        }
    }
}
