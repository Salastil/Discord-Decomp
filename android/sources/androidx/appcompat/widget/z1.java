package androidx.appcompat.widget;

import android.view.View;
import android.widget.AdapterView;

/* loaded from: classes.dex */
public final class z1 implements AdapterView.OnItemSelectedListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f1182d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f1183e;

    public /* synthetic */ z1(int i5, Object obj) {
        this.f1182d = i5;
        this.f1183e = obj;
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public final void onItemSelected(AdapterView adapterView, View view, int i5, long j) {
        t1 t1Var;
        switch (this.f1182d) {
            case 0:
                if (i5 != -1 && (t1Var = ((g2) this.f1183e).f993i) != null) {
                    t1Var.setListSelectionHidden(false);
                    break;
                }
                break;
            default:
                ((com.swmansion.rnscreens.b) this.f1183e).o(i5);
                break;
        }
    }

    @Override // android.widget.AdapterView.OnItemSelectedListener
    public final void onNothingSelected(AdapterView adapterView) {
        int i5 = this.f1182d;
    }

    private final void a(AdapterView adapterView) {
    }

    private final void b(AdapterView adapterView) {
    }
}
