package af;

import android.os.Bundle;
import android.os.Parcel;
import android.view.View;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import com.google.android.material.sidesheet.SideSheetBehavior;
import io.sentry.android.core.h1;
import java.lang.ref.WeakReference;
import java.nio.ByteBuffer;
import java.util.ArrayDeque;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class k implements wd.f {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public Object f564b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f565c;

    /* renamed from: d, reason: collision with root package name */
    public int f566d;

    /* renamed from: e, reason: collision with root package name */
    public Object f567e;

    public k(k kVar, ye.d[] dVarArr, boolean z5, int i5) {
        this.a = 1;
        this.f567e = kVar;
        this.f564b = dVarArr;
        boolean z6 = false;
        if (dVarArr != null && z5) {
            z6 = true;
        }
        this.f565c = z6;
        this.f566d = i5;
    }

    public static k f() {
        k kVar = new k(0);
        kVar.f565c = true;
        kVar.f566d = 0;
        return kVar;
    }

    @Override // mc.d
    public Object b() {
        ArrayDeque arrayDeque = (ArrayDeque) this.f564b;
        wd.i iVar = (wd.i) this.f567e;
        ke.b.k(!this.f565c);
        if (this.f566d != 2 || arrayDeque.isEmpty()) {
            return null;
        }
        wd.c cVar = (wd.c) arrayDeque.removeFirst();
        if (iVar.c(4)) {
            cVar.a(4);
        } else {
            long j = iVar.f14438x;
            ByteBuffer byteBuffer = iVar.f14436v;
            byteBuffer.getClass();
            byte[] array = byteBuffer.array();
            Parcel obtain = Parcel.obtain();
            obtain.unmarshall(array, 0, array.length);
            obtain.setDataPosition(0);
            Bundle readBundle = obtain.readBundle(Bundle.class.getClassLoader());
            obtain.recycle();
            ArrayList parcelableArrayList = readBundle.getParcelableArrayList("c");
            parcelableArrayList.getClass();
            cVar.g(iVar.f14438x, new androidx.recyclerview.widget.h(j, ke.b.v(wd.b.f19801g0, parcelableArrayList), 8), 0L);
        }
        iVar.f();
        this.f566d = 0;
        return cVar;
    }

    @Override // mc.d
    public Object c() {
        ke.b.k(!this.f565c);
        if (this.f566d != 0) {
            return null;
        }
        this.f566d = 1;
        return (wd.i) this.f567e;
    }

    @Override // mc.d
    public void d(wd.i iVar) {
        ke.b.k(!this.f565c);
        ke.b.k(this.f566d == 1);
        ke.b.g(((wd.i) this.f567e) == iVar);
        this.f566d = 2;
    }

    public k e() {
        bf.t.a("execute parameter required", ((i) this.f567e) != null);
        return new k(this, (ye.d[]) this.f564b, this.f565c, this.f566d);
    }

    @Override // mc.d
    public void flush() {
        ke.b.k(!this.f565c);
        ((wd.i) this.f567e).f();
        this.f566d = 0;
    }

    public void g(int i5) {
        switch (this.a) {
            case 2:
                SideSheetBehavior sideSheetBehavior = (SideSheetBehavior) this.f564b;
                WeakReference weakReference = sideSheetBehavior.f6099p;
                if (weakReference != null && weakReference.get() != null) {
                    this.f566d = i5;
                    if (!this.f565c) {
                        ((View) sideSheetBehavior.f6099p.get()).postOnAnimation((h1) this.f567e);
                        this.f565c = true;
                        break;
                    }
                }
                break;
            default:
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) this.f564b;
                WeakReference weakReference2 = bottomSheetBehavior.W;
                if (weakReference2 != null && weakReference2.get() != null) {
                    this.f566d = i5;
                    if (!this.f565c) {
                        ((View) bottomSheetBehavior.W.get()).postOnAnimation((sg.d) this.f567e);
                        this.f565c = true;
                        break;
                    }
                }
                break;
        }
    }

    @Override // mc.d
    public void release() {
        this.f565c = true;
    }

    public k(int i5) {
        this.a = i5;
        switch (i5) {
            case 4:
                this.f567e = new wd.i(1);
                this.f564b = new ArrayDeque();
                for (int i6 = 0; i6 < 2; i6++) {
                    ((ArrayDeque) this.f564b).addFirst(new wd.c(this, 0));
                }
                this.f566d = 0;
                break;
        }
    }

    public k(SideSheetBehavior sideSheetBehavior) {
        this.a = 2;
        this.f564b = sideSheetBehavior;
        this.f567e = new h1(24, this);
    }

    public k(BottomSheetBehavior bottomSheetBehavior) {
        this.a = 3;
        this.f564b = bottomSheetBehavior;
        this.f567e = new sg.d(0, this);
    }

    @Override // wd.f
    public void a(long j) {
    }
}
