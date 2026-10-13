package k2;

import android.os.Build;
import android.os.Handler;
import android.os.Looper;
import androidx.emoji2.text.EmojiCompatInitializer;
import androidx.lifecycle.DefaultLifecycleObserver;
import androidx.lifecycle.Lifecycle;
import androidx.lifecycle.LifecycleOwner;

/* loaded from: classes.dex */
public final class k implements DefaultLifecycleObserver {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Lifecycle f13133d;

    public k(EmojiCompatInitializer emojiCompatInitializer, Lifecycle lifecycle) {
        this.f13133d = lifecycle;
    }

    @Override // androidx.lifecycle.DefaultLifecycleObserver
    public final void onResume(LifecycleOwner lifecycleOwner) {
        (Build.VERSION.SDK_INT >= 28 ? b.a(Looper.getMainLooper()) : new Handler(Looper.getMainLooper())).postDelayed(new n(), 500L);
        this.f13133d.c(this);
    }
}
