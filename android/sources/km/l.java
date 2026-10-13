package km;

import android.view.MotionEvent;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends jm.f {
    public final boolean R = true;
    public final /* synthetic */ m S;

    public l(m mVar, int i5) {
        this.S = mVar;
        this.f12874d = i5;
        this.f12890v = false;
    }

    public final void M(MotionEvent motionEvent) {
        jm.g gVar;
        ArrayList arrayList;
        if (this.f12878h == 0) {
            m mVar = this.S;
            if (mVar.f13446f && (gVar = this.F) != null && ((arrayList = gVar.f12904f) == null || !arrayList.isEmpty())) {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    if (((jm.f) it.next()).f12878h == 4) {
                        break;
                    }
                }
            }
            d();
            mVar.f13446f = false;
        }
        if (motionEvent.getActionMasked() == 1 || motionEvent.getActionMasked() == 10) {
            k();
        }
    }

    @Override // jm.f
    public final boolean t() {
        return this.R;
    }

    @Override // jm.f
    public final void w() {
        this.S.f13446f = true;
    }

    @Override // jm.f
    public final void y(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        M(event);
    }

    @Override // jm.f
    public final void z(MotionEvent event, MotionEvent sourceEvent) {
        Intrinsics.checkNotNullParameter(event, "event");
        Intrinsics.checkNotNullParameter(sourceEvent, "sourceEvent");
        M(event);
    }
}
