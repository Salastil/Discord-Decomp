package x9;

import android.util.Log;
import java.util.ArrayList;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import l1.c;

/* loaded from: classes3.dex */
public final class a {
    public final ArrayList a = new ArrayList(2);

    public final void a(String id2, Throwable th2, c cVar) {
        Intrinsics.checkNotNullParameter(id2, "id");
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                try {
                    ((a) arrayList.get(i5)).a(id2, th2, cVar);
                    Unit unit = Unit.a;
                } catch (Exception e9) {
                    Log.e("FwdControllerListener2", "InternalListener exception in onFailure", e9);
                }
            } catch (IndexOutOfBoundsException unused) {
                return;
            }
        }
    }

    public final void b(String id2, Object obj, c cVar) {
        Intrinsics.checkNotNullParameter(id2, "id");
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                try {
                    ((a) arrayList.get(i5)).b(id2, obj, cVar);
                    Unit unit = Unit.a;
                } catch (Exception e9) {
                    Log.e("FwdControllerListener2", "InternalListener exception in onFinalImageSet", e9);
                }
            } catch (IndexOutOfBoundsException unused) {
                return;
            }
        }
    }

    public final void c(String id2) {
        Intrinsics.checkNotNullParameter(id2, "id");
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                try {
                    ((a) arrayList.get(i5)).c(id2);
                    Unit unit = Unit.a;
                } catch (Exception e9) {
                    Log.e("FwdControllerListener2", "InternalListener exception in onIntermediateImageFailed", e9);
                }
            } catch (IndexOutOfBoundsException unused) {
                return;
            }
        }
    }

    public final void d(String id2, Object obj) {
        Intrinsics.checkNotNullParameter(id2, "id");
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                try {
                    ((a) arrayList.get(i5)).d(id2, obj);
                    Unit unit = Unit.a;
                } catch (Exception e9) {
                    Log.e("FwdControllerListener2", "InternalListener exception in onIntermediateImageSet", e9);
                }
            } catch (IndexOutOfBoundsException unused) {
                return;
            }
        }
    }

    public final void e(String id2, c cVar) {
        Intrinsics.checkNotNullParameter(id2, "id");
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                try {
                    ((a) arrayList.get(i5)).e(id2, cVar);
                    Unit unit = Unit.a;
                } catch (Exception e9) {
                    Log.e("FwdControllerListener2", "InternalListener exception in onRelease", e9);
                }
            } catch (IndexOutOfBoundsException unused) {
                return;
            }
        }
    }

    public final void f(String id2, Object obj, c cVar) {
        Intrinsics.checkNotNullParameter(id2, "id");
        ArrayList arrayList = this.a;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                try {
                    ((a) arrayList.get(i5)).f(id2, obj, cVar);
                    Unit unit = Unit.a;
                } catch (Exception e9) {
                    Log.e("FwdControllerListener2", "InternalListener exception in onSubmit", e9);
                }
            } catch (IndexOutOfBoundsException unused) {
                return;
            }
        }
    }
}
