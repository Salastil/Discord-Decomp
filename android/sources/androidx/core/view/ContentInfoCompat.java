package androidx.core.view;

import android.content.ClipData;
import android.content.ClipDescription;
import android.os.Build;
import android.util.Pair;
import android.view.ContentInfo;
import androidx.core.util.Predicate;
import java.util.ArrayList;
import java.util.Objects;

/* loaded from: classes.dex */
public final class ContentInfoCompat {
    public final g a;

    public ContentInfoCompat(g gVar) {
        this.a = gVar;
    }

    public static ClipData a(ClipDescription clipDescription, ArrayList arrayList) {
        ClipData clipData = new ClipData(new ClipDescription(clipDescription), (ClipData.Item) arrayList.get(0));
        for (int i5 = 1; i5 < arrayList.size(); i5++) {
            clipData.addItem((ClipData.Item) arrayList.get(i5));
        }
        return clipData;
    }

    public final Pair b(Predicate predicate) {
        e eVar;
        e eVar2;
        g gVar = this.a;
        ClipData f2 = gVar.f();
        if (f2.getItemCount() == 1) {
            boolean test = predicate.test(f2.getItemAt(0));
            return Pair.create(test ? this : null, test ? null : this);
        }
        ArrayList arrayList = null;
        ArrayList arrayList2 = null;
        for (int i5 = 0; i5 < f2.getItemCount(); i5++) {
            ClipData.Item itemAt = f2.getItemAt(i5);
            if (predicate.test(itemAt)) {
                if (arrayList == null) {
                    arrayList = new ArrayList();
                }
                arrayList.add(itemAt);
            } else {
                if (arrayList2 == null) {
                    arrayList2 = new ArrayList();
                }
                arrayList2.add(itemAt);
            }
        }
        Pair create = arrayList == null ? Pair.create(null, f2) : arrayList2 == null ? Pair.create(f2, null) : Pair.create(a(f2.getDescription(), arrayList), a(f2.getDescription(), arrayList2));
        if (create.first == null) {
            return Pair.create(null, this);
        }
        if (create.second == null) {
            return Pair.create(this, null);
        }
        int i6 = Build.VERSION.SDK_INT;
        if (i6 >= 31) {
            eVar = new d(this);
        } else {
            f fVar = new f();
            fVar.f1580b = gVar.f();
            fVar.f1581c = gVar.d();
            fVar.f1582d = gVar.g();
            fVar.f1583e = gVar.e();
            fVar.f1584f = gVar.getExtras();
            eVar = fVar;
        }
        eVar.c((ClipData) create.first);
        ContentInfoCompat build = eVar.build();
        if (i6 >= 31) {
            eVar2 = new d(this);
        } else {
            f fVar2 = new f();
            fVar2.f1580b = gVar.f();
            fVar2.f1581c = gVar.d();
            fVar2.f1582d = gVar.g();
            fVar2.f1583e = gVar.e();
            fVar2.f1584f = gVar.getExtras();
            eVar2 = fVar2;
        }
        eVar2.c((ClipData) create.second);
        return Pair.create(build, eVar2.build());
    }

    public final ContentInfo c() {
        ContentInfo h6 = this.a.h();
        Objects.requireNonNull(h6);
        return h6;
    }

    public final String toString() {
        return this.a.toString();
    }
}
