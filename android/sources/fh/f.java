package fh;

import android.content.Context;
import android.view.SubMenu;

/* loaded from: classes3.dex */
public final class f extends n.j {
    public final int A;

    /* renamed from: z, reason: collision with root package name */
    public final Class f8579z;

    public f(Context context, Class cls, int i5) {
        super(context);
        this.f8579z = cls;
        this.A = i5;
    }

    @Override // n.j
    public final n.l a(int i5, int i6, int i10, CharSequence charSequence) {
        int size = this.f14651f.size() + 1;
        int i11 = this.A;
        if (size > i11) {
            String simpleName = this.f8579z.getSimpleName();
            throw new IllegalArgumentException(com.discord.chat.bridge.botuikit.a.j(a3.e.s("Maximum number of items supported by ", simpleName, " is ", i11, ". Limit can be checked with "), simpleName, "#getMaxItemCount()"));
        }
        w();
        n.l a = super.a(i5, i6, i10, charSequence);
        v();
        return a;
    }

    @Override // n.j, android.view.Menu
    public final SubMenu addSubMenu(int i5, int i6, int i10, CharSequence charSequence) {
        throw new UnsupportedOperationException(this.f8579z.getSimpleName().concat(" does not support submenus"));
    }
}
