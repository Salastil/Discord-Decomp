package androidx.appcompat.widget;

import android.database.DataSetObserver;

/* loaded from: classes.dex */
public final class d2 extends DataSetObserver {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f945b;

    public /* synthetic */ d2(int i5, Object obj) {
        this.a = i5;
        this.f945b = obj;
    }

    @Override // android.database.DataSetObserver
    public final void onChanged() {
        switch (this.a) {
            case 0:
                g2 g2Var = (g2) this.f945b;
                if (g2Var.W.isShowing()) {
                    g2Var.show();
                    break;
                }
                break;
            default:
                h3 h3Var = (h3) this.f945b;
                h3Var.f2725d = true;
                h3Var.notifyDataSetChanged();
                break;
        }
    }

    @Override // android.database.DataSetObserver
    public final void onInvalidated() {
        switch (this.a) {
            case 0:
                ((g2) this.f945b).dismiss();
                break;
            default:
                h3 h3Var = (h3) this.f945b;
                h3Var.f2725d = false;
                h3Var.notifyDataSetInvalidated();
                break;
        }
    }
}
