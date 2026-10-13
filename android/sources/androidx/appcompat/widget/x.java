package androidx.appcompat.widget;

import android.content.Context;
import android.content.res.ColorStateList;
import android.graphics.PorterDuff;
import android.graphics.PorterDuffColorFilter;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.LayerDrawable;
import android.util.Log;
import com.discord.R;

/* loaded from: classes.dex */
public final class x {

    /* renamed from: b, reason: collision with root package name */
    public static final PorterDuff.Mode f1158b = PorterDuff.Mode.SRC_IN;

    /* renamed from: c, reason: collision with root package name */
    public static x f1159c;
    public n2 a;

    public static synchronized x a() {
        x xVar;
        synchronized (x.class) {
            try {
                if (f1159c == null) {
                    d();
                }
                xVar = f1159c;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return xVar;
    }

    public static synchronized PorterDuffColorFilter c(int i5, PorterDuff.Mode mode) {
        PorterDuffColorFilter e9;
        synchronized (x.class) {
            e9 = n2.e(i5, mode);
        }
        return e9;
    }

    public static synchronized void d() {
        synchronized (x.class) {
            if (f1159c == null) {
                x xVar = new x();
                f1159c = xVar;
                xVar.a = n2.b();
                n2 n2Var = f1159c.a;
                w wVar = new w();
                wVar.f1141d = new int[]{2131230872, 2131230870, 2131230796};
                wVar.f1142e = new int[]{2131230820, R.drawable.abc_seekbar_tick_mark_material, R.drawable.abc_ic_menu_share_mtrl_alpha, R.drawable.abc_ic_menu_copy_mtrl_am_alpha, R.drawable.abc_ic_menu_cut_mtrl_alpha, R.drawable.abc_ic_menu_selectall_mtrl_alpha, R.drawable.abc_ic_menu_paste_mtrl_am_alpha};
                wVar.f1143i = new int[]{2131230869, 2131230871, 2131230813, R.drawable.abc_text_cursor_material, 2131230866, 2131230867, 2131230868};
                wVar.f1144v = new int[]{2131230845, R.drawable.abc_cab_background_internal_bg, 2131230844};
                wVar.f1145w = new int[]{R.drawable.abc_tab_indicator_material, R.drawable.abc_textfield_search_material};
                wVar.f1146x = new int[]{R.drawable.abc_btn_check_material, R.drawable.abc_btn_radio_material, R.drawable.abc_btn_check_material_anim, R.drawable.abc_btn_radio_material_anim};
                synchronized (n2Var) {
                    n2Var.f1056e = wVar;
                }
            }
        }
    }

    public static void e(Drawable drawable, m3 m3Var, int[] iArr) {
        PorterDuff.Mode mode = n2.f1050f;
        int[] state = drawable.getState();
        if (drawable.mutate() != drawable) {
            Log.d("ResourceManagerInternal", "Mutated drawable is not the same instance as the input.");
            return;
        }
        if ((drawable instanceof LayerDrawable) && drawable.isStateful()) {
            drawable.setState(new int[0]);
            drawable.setState(state);
        }
        boolean z5 = m3Var.f1036b;
        if (!z5 && !m3Var.a) {
            drawable.clearColorFilter();
            return;
        }
        PorterDuffColorFilter porterDuffColorFilter = null;
        ColorStateList colorStateList = z5 ? (ColorStateList) m3Var.f1037c : null;
        PorterDuff.Mode mode2 = m3Var.a ? (PorterDuff.Mode) m3Var.f1038d : n2.f1050f;
        if (colorStateList != null && mode2 != null) {
            porterDuffColorFilter = n2.e(colorStateList.getColorForState(iArr, 0), mode2);
        }
        drawable.setColorFilter(porterDuffColorFilter);
    }

    public final synchronized Drawable b(Context context, int i5) {
        return this.a.c(context, i5);
    }
}
