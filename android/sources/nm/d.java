package nm;

import android.view.ViewGroup;
import com.facebook.react.uimanager.ThemedReactContext;
import com.swmansion.rnscreens.Screen;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d {
    public final b a;

    /* renamed from: b, reason: collision with root package name */
    public final float f15559b;

    /* renamed from: c, reason: collision with root package name */
    public c f15560c;

    public d(ThemedReactContext reactContext, Screen screen) {
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(screen, "screen");
        b bVar = new b(reactContext, this.f15559b);
        bVar.setLayoutParams(new ViewGroup.LayoutParams(-1, -1));
        bVar.setOnClickListener(new com.discord.chat.presentation.list.delegate.b(10, screen));
        this.a = bVar;
        this.f15559b = 0.3f;
    }
}
