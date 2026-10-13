package androidx.appcompat.widget;

import android.content.res.Resources;
import android.graphics.Rect;
import android.view.View;
import com.discord.R;

/* loaded from: classes.dex */
public final class u2 implements View.OnLayoutChangeListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1122d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1123e;

    public /* synthetic */ u2(int i5, Object obj) {
        this.f1122d = i5;
        this.f1123e = obj;
    }

    @Override // android.view.View.OnLayoutChangeListener
    public final void onLayoutChange(View view, int i5, int i6, int i10, int i11, int i12, int i13, int i14, int i15) {
        switch (this.f1122d) {
            case 0:
                com.swmansion.rnscreens.b bVar = (com.swmansion.rnscreens.b) this.f1123e;
                SearchView$SearchAutoComplete searchView$SearchAutoComplete = bVar.M;
                View view2 = bVar.U;
                if (view2.getWidth() > 1) {
                    Resources resources = bVar.getContext().getResources();
                    int paddingLeft = bVar.O.getPaddingLeft();
                    Rect rect = new Rect();
                    boolean z5 = f4.a;
                    boolean z6 = bVar.getLayoutDirection() == 1;
                    int dimensionPixelSize = bVar.f966o0 ? resources.getDimensionPixelSize(R.dimen.abc_dropdownitem_text_padding_left) + resources.getDimensionPixelSize(R.dimen.abc_dropdownitem_icon_width) : 0;
                    searchView$SearchAutoComplete.getDropDownBackground().getPadding(rect);
                    searchView$SearchAutoComplete.setDropDownHorizontalOffset(z6 ? -rect.left : paddingLeft - (rect.left + dimensionPixelSize));
                    searchView$SearchAutoComplete.setDropDownWidth((((view2.getWidth() + rect.left) + rect.right) + dimensionPixelSize) - paddingLeft);
                    return;
                }
                return;
            default:
                throw null;
        }
    }
}
