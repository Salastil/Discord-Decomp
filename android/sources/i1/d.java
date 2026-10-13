package i1;

import android.content.Context;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Objects;
import java.util.concurrent.Callable;

/* loaded from: classes.dex */
public final class d implements Callable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10444d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f10445e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Context f10446i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f10447v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f10448w;

    public /* synthetic */ d(String str, Context context, Object obj, int i5, int i6) {
        this.f10444d = i6;
        this.f10445e = str;
        this.f10446i = context;
        this.f10448w = obj;
        this.f10447v = i5;
    }

    @Override // java.util.concurrent.Callable
    public final Object call() {
        switch (this.f10444d) {
            case 0:
                Object[] objArr = {(c) this.f10448w};
                ArrayList arrayList = new ArrayList(1);
                Object obj = objArr[0];
                Objects.requireNonNull(obj);
                arrayList.add(obj);
                return f.b(this.f10445e, this.f10446i, Collections.unmodifiableList(arrayList), this.f10447v);
            default:
                try {
                    return f.b(this.f10445e, this.f10446i, (ArrayList) this.f10448w, this.f10447v);
                } catch (Throwable unused) {
                    return new e(-3);
                }
        }
    }
}
