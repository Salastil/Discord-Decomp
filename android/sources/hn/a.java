package hn;

import android.content.res.TypedArray;
import androidx.appcompat.view.ContextThemeWrapper;
import ch.q;
import com.discord.R;
import e4.m;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes3.dex */
public final class a extends rg.e {

    /* renamed from: x, reason: collision with root package name */
    public final f f10112x;

    /* renamed from: y, reason: collision with root package name */
    public b f10113y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(ContextThemeWrapper context, f container) {
        super(context);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(container, "container");
        m g6 = q.g(getContext(), null, lg.a.f13956e, R.attr.bottomNavigationStyle, R.style.Widget_Design_BottomNavigationView, new int[0]);
        TypedArray typedArray = (TypedArray) g6.f7964i;
        setItemHorizontalTranslationEnabled(typedArray.getBoolean(2, true));
        if (typedArray.hasValue(0)) {
            setMinimumHeight(typedArray.getDimensionPixelSize(0, 0));
        }
        g6.e0();
        q.d(this, new r8.c(16));
        this.f10112x = container;
    }

    @NotNull
    public final f getContainer() {
        return this.f10112x;
    }

    @Override // fh.p
    public void setSelectedItemId(int i5) {
        if (this.f10113y == null) {
            this.f10113y = b.f10114d;
        }
        b actionOrigin = this.f10113y;
        if (actionOrigin == null) {
            throw new IllegalStateException("Required value was null.");
        }
        super.setSelectedItemId(i5);
        f fVar = this.f10112x;
        fVar.getClass();
        Intrinsics.checkNotNullParameter(actionOrigin, "actionOrigin");
        if (actionOrigin == b.f10114d) {
            fVar.h();
        }
        this.f10113y = null;
    }
}
