package ym;

import a5.k0;
import android.R;
import android.content.Context;
import com.google.android.material.appbar.MaterialToolbar;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import ng.k;
import org.jetbrains.annotations.NotNull;
import zm.i;

/* loaded from: classes3.dex */
public final class a extends c {

    /* renamed from: c0, reason: collision with root package name */
    public final i f20961c0;

    /* renamed from: d0, reason: collision with root package name */
    public final MaterialToolbar f20962d0;

    /* renamed from: e0, reason: collision with root package name */
    public final k f20963e0;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(Context context, i type) {
        super(context);
        Pair pair;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(type, "type");
        this.f20961c0 = type;
        MaterialToolbar materialToolbar = new MaterialToolbar(context, null);
        materialToolbar.setElevation(0.0f);
        ng.h hVar = new ng.h(k0.S(context, R.attr.actionBarSize));
        hVar.a = 1;
        materialToolbar.setLayoutParams(hVar);
        this.f20962d0 = materialToolbar;
        int ordinal = type.ordinal();
        if (ordinal == 1) {
            pair = new Pair(Integer.valueOf(com.discord.R.attr.collapsingToolbarLayoutMediumStyle), Integer.valueOf(com.discord.R.attr.collapsingToolbarLayoutMediumSize));
        } else {
            if (ordinal != 2) {
                throw new IllegalStateException("[RNScreens] Invalid header mode.");
            }
            pair = new Pair(Integer.valueOf(com.discord.R.attr.collapsingToolbarLayoutLargeStyle), Integer.valueOf(com.discord.R.attr.collapsingToolbarLayoutLargeSize));
        }
        int intValue = ((Number) pair.f13474d).intValue();
        int intValue2 = ((Number) pair.f13475e).intValue();
        k kVar = new k(context, intValue);
        kVar.setLayoutParams(new ng.e(k0.S(context, intValue2)));
        kVar.addView(getToolbar());
        this.f20963e0 = kVar;
        if (type != i.f21299e && type != i.f21300i) {
            throw new IllegalArgumentException("[RNScreens] Collapsing StackHeaderAppBarLayout must be MEDIUM or LARGE type.");
        }
        addView(kVar);
    }

    @NotNull
    public final k getCollapsingToolbarLayout$react_native_screens_release() {
        return this.f20963e0;
    }

    @Override // ym.c
    @NotNull
    public MaterialToolbar getToolbar() {
        return this.f20962d0;
    }

    @NotNull
    public final i getType() {
        return this.f20961c0;
    }
}
