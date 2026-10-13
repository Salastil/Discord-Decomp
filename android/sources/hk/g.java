package hk;

import android.widget.EditText;

/* loaded from: classes3.dex */
public final class g implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final EditText f10040d;

    /* renamed from: e, reason: collision with root package name */
    public int f10041e;

    /* renamed from: i, reason: collision with root package name */
    public int f10042i;

    /* renamed from: v, reason: collision with root package name */
    public boolean f10043v;

    public g(EditText editText) {
        this.f10040d = editText;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f10043v = false;
        this.f10040d.setSelection(this.f10041e, this.f10042i);
    }
}
