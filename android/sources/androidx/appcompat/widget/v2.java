package androidx.appcompat.widget;

import android.text.TextUtils;
import android.view.KeyEvent;
import android.view.View;

/* loaded from: classes.dex */
public final class v2 implements View.OnKeyListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ com.swmansion.rnscreens.b f1138d;

    public v2(com.swmansion.rnscreens.b bVar) {
        this.f1138d = bVar;
    }

    @Override // android.view.View.OnKeyListener
    public final boolean onKey(View view, int i5, KeyEvent keyEvent) {
        com.swmansion.rnscreens.b bVar = this.f1138d;
        SearchView$SearchAutoComplete searchView$SearchAutoComplete = bVar.M;
        if (bVar.B0 != null) {
            if (!searchView$SearchAutoComplete.isPopupShowing() || searchView$SearchAutoComplete.getListSelection() == -1) {
                if (TextUtils.getTrimmedLength(searchView$SearchAutoComplete.getText()) != 0 && keyEvent.hasNoModifiers() && keyEvent.getAction() == 1 && i5 == 66) {
                    view.cancelLongPress();
                    bVar.getContext().startActivity(bVar.j("android.intent.action.SEARCH", null, null, searchView$SearchAutoComplete.getText().toString()));
                    return true;
                }
            } else if (bVar.B0 != null && bVar.f968q0 != null && keyEvent.getAction() == 0 && keyEvent.hasNoModifiers()) {
                if (i5 == 66 || i5 == 84 || i5 == 61) {
                    bVar.n(searchView$SearchAutoComplete.getListSelection());
                    return true;
                }
                if (i5 == 21 || i5 == 22) {
                    searchView$SearchAutoComplete.setSelection(i5 == 21 ? 0 : searchView$SearchAutoComplete.length());
                    searchView$SearchAutoComplete.setListSelection(0);
                    searchView$SearchAutoComplete.clearListSelection();
                    searchView$SearchAutoComplete.a();
                    return true;
                }
                if (i5 == 19) {
                    searchView$SearchAutoComplete.getListSelection();
                    return false;
                }
            }
        }
        return false;
    }
}
