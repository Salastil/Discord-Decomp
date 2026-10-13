package rb;

import android.app.Activity;
import android.view.OrientationEventListener;

/* loaded from: classes3.dex */
public final class d extends OrientationEventListener {
    public final /* synthetic */ e a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(Activity activity, e eVar) {
        super(activity);
        this.a = eVar;
    }

    @Override // android.view.OrientationEventListener
    public final void onOrientationChanged(int i5) {
        e.f17187w.invoke(Integer.valueOf(i5), this.a.f17188d);
    }
}
