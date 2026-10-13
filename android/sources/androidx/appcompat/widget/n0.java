package androidx.appcompat.widget;

import android.view.View;
import android.widget.AdapterView;

/* loaded from: classes.dex */
public final class n0 implements AdapterView.OnItemClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1046d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1047e;

    public /* synthetic */ n0(int i5, Object obj) {
        this.f1046d = i5;
        this.f1047e = obj;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public final void onItemClick(AdapterView adapterView, View view, int i5, long j) {
        CharSequence convertSelectionToString;
        switch (this.f1046d) {
            case 0:
                p0 p0Var = (p0) this.f1047e;
                s0 s0Var = p0Var.f1068d0;
                s0Var.setSelection(i5);
                if (s0Var.getOnItemClickListener() != null) {
                    s0Var.performItemClick(view, i5, p0Var.a0.getItemId(i5));
                }
                p0Var.dismiss();
                break;
            case 1:
                ((com.swmansion.rnscreens.b) this.f1047e).n(i5);
                break;
            default:
                oh.t tVar = (oh.t) this.f1047e;
                g2 g2Var = tVar.f15954w;
                convertSelectionToString = tVar.convertSelectionToString(i5 < 0 ? !g2Var.W.isShowing() ? null : g2Var.f993i.getSelectedItem() : tVar.getAdapter().getItem(i5));
                tVar.setText(convertSelectionToString, false);
                AdapterView.OnItemClickListener onItemClickListener = tVar.getOnItemClickListener();
                if (onItemClickListener != null) {
                    if (view == null || i5 < 0) {
                        view = !g2Var.W.isShowing() ? null : g2Var.f993i.getSelectedView();
                        i5 = !g2Var.W.isShowing() ? -1 : g2Var.f993i.getSelectedItemPosition();
                        j = !g2Var.W.isShowing() ? Long.MIN_VALUE : g2Var.f993i.getSelectedItemId();
                    }
                    onItemClickListener.onItemClick(g2Var.f993i, view, i5, j);
                }
                g2Var.dismiss();
                break;
        }
    }
}
