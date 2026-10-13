package i;

import android.content.DialogInterface;
import android.view.View;
import android.widget.AdapterView;

/* loaded from: classes.dex */
public final class a implements AdapterView.OnItemClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ d f10249d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ b f10250e;

    public a(b bVar, d dVar) {
        this.f10250e = bVar;
        this.f10249d = dVar;
    }

    @Override // android.widget.AdapterView.OnItemClickListener
    public final void onItemClick(AdapterView adapterView, View view, int i5, long j) {
        b bVar = this.f10250e;
        DialogInterface.OnClickListener onClickListener = bVar.f10267p;
        d dVar = this.f10249d;
        onClickListener.onClick(dVar.f10278b, i5);
        if (bVar.f10269r) {
            return;
        }
        dVar.f10278b.dismiss();
    }
}
