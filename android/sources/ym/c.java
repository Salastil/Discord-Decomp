package ym;

import android.content.Context;
import com.google.android.material.appbar.MaterialToolbar;
import com.swmansion.rnscreens.gamma.stack.header.StackHeaderAppBarLayoutBehavior;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public abstract class c extends ng.g {

    /* renamed from: b0, reason: collision with root package name */
    public static final /* synthetic */ int f20966b0 = 0;

    public c(Context context) {
        super(context);
        v0.d dVar = new v0.d(-1, -2);
        dVar.b(new StackHeaderAppBarLayoutBehavior());
        setLayoutParams(dVar);
        setLiftOnScroll(true);
        setFitsSystemWindows(true);
    }

    @NotNull
    public abstract MaterialToolbar getToolbar();
}
