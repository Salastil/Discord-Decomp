package e;

import android.window.BackEvent;
import android.window.OnBackAnimationCallback;
import androidx.activity.BackEventCompat;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class q implements OnBackAnimationCallback {
    public final /* synthetic */ o a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ o f7824b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ p f7825c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ p f7826d;

    public q(o oVar, o oVar2, p pVar, p pVar2) {
        this.a = oVar;
        this.f7824b = oVar2;
        this.f7825c = pVar;
        this.f7826d = pVar2;
    }

    public final void onBackCancelled() {
        this.f7826d.invoke();
    }

    public final void onBackInvoked() {
        this.f7825c.invoke();
    }

    public final void onBackProgressed(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        this.f7824b.invoke(new BackEventCompat(backEvent));
    }

    public final void onBackStarted(BackEvent backEvent) {
        Intrinsics.checkNotNullParameter(backEvent, "backEvent");
        this.a.invoke(new BackEventCompat(backEvent));
    }
}
