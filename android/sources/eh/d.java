package eh;

import android.window.BackEvent;
import android.window.OnBackAnimationCallback;
import androidx.activity.BackEventCompat;

/* loaded from: classes3.dex */
public final class d implements OnBackAnimationCallback {
    public final /* synthetic */ b a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ e f8089b;

    public d(e eVar, b bVar) {
        this.f8089b = eVar;
        this.a = bVar;
    }

    public final void onBackCancelled() {
        if (this.f8089b.a != null) {
            this.a.d();
        }
    }

    public final void onBackInvoked() {
        this.a.c();
    }

    public final void onBackProgressed(BackEvent backEvent) {
        if (this.f8089b.a != null) {
            this.a.b(new BackEventCompat(backEvent));
        }
    }

    public final void onBackStarted(BackEvent backEvent) {
        if (this.f8089b.a != null) {
            this.a.a(new BackEventCompat(backEvent));
        }
    }
}
