package rm;

import com.facebook.react.runtime.r;
import fo.n;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class b implements d, c {
    public static final /* synthetic */ KProperty[] E = {com.discord.chat.bridge.botuikit.a.p(b.class, "colorScheme", "getColorScheme$react_native_screens_release()Lcom/swmansion/rnscreens/gamma/common/colorscheme/ColorScheme;", 0)};

    /* renamed from: d, reason: collision with root package name */
    public final an.b f17411d;

    /* renamed from: e, reason: collision with root package name */
    public d f17412e;

    /* renamed from: i, reason: collision with root package name */
    public int f17413i;

    /* renamed from: v, reason: collision with root package name */
    public Integer f17414v;

    /* renamed from: w, reason: collision with root package name */
    public final ArrayList f17415w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f17416x;

    /* renamed from: y, reason: collision with root package name */
    public r f17417y;

    public b() {
        a aVar = a.f17407d;
        this.f17411d = new an.b(this);
        this.f17413i = 16;
        this.f17415w = new ArrayList();
    }

    @Override // rm.d
    public final void a(c listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.f17415w.add(listener);
    }

    public final void b() {
        int resolvedUiNightMode = getResolvedUiNightMode();
        Integer num = this.f17414v;
        if (num != null && resolvedUiNightMode == num.intValue()) {
            return;
        }
        this.f17414v = Integer.valueOf(resolvedUiNightMode);
        r rVar = this.f17417y;
        if (rVar != null) {
            rVar.invoke(Integer.valueOf(resolvedUiNightMode));
        }
        Iterator it = this.f17415w.iterator();
        while (it.hasNext()) {
            b bVar = (b) ((c) it.next());
            if (((a) bVar.f17411d.getValue(bVar, E[0])) == a.f17407d) {
                bVar.b();
            }
        }
    }

    @Override // rm.d
    public final void c(c listener) {
        Intrinsics.checkNotNullParameter(listener, "listener");
        this.f17415w.remove(listener);
    }

    @Override // rm.d
    public final int getResolvedUiNightMode() {
        int ordinal = ((a) this.f17411d.getValue(this, E[0])).ordinal();
        if (ordinal == 0) {
            d dVar = this.f17412e;
            return dVar != null ? dVar.getResolvedUiNightMode() : this.f17413i;
        }
        if (ordinal == 1) {
            return 16;
        }
        if (ordinal == 2) {
            return 32;
        }
        throw new n();
    }
}
