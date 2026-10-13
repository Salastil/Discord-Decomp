package ue;

import com.google.android.gms.common.api.Scope;
import java.util.Comparator;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements Comparator {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ b f18876e = new b(0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18877d;

    public /* synthetic */ b(int i5) {
        this.f18877d = i5;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        switch (this.f18877d) {
        }
        return ((Scope) obj).f5653e.compareTo(((Scope) obj2).f5653e);
    }
}
