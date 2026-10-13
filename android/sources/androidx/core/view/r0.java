package androidx.core.view;

import android.util.SparseArray;
import android.view.View;
import android.view.ViewGroup;
import com.discord.R;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import java.util.WeakHashMap;

/* loaded from: classes.dex */
public final class r0 {

    /* renamed from: d, reason: collision with root package name */
    public static final ArrayList f1626d = new ArrayList();
    public WeakHashMap a;

    /* renamed from: b, reason: collision with root package name */
    public SparseArray f1627b;

    /* renamed from: c, reason: collision with root package name */
    public WeakReference f1628c;

    public final View a(View view) {
        int size;
        WeakHashMap weakHashMap = this.a;
        if (weakHashMap == null || !weakHashMap.containsKey(view)) {
            return null;
        }
        if (view instanceof ViewGroup) {
            ViewGroup viewGroup = (ViewGroup) view;
            for (int childCount = viewGroup.getChildCount() - 1; childCount >= 0; childCount--) {
                View a = a(viewGroup.getChildAt(childCount));
                if (a != null) {
                    return a;
                }
            }
        }
        ArrayList arrayList = (ArrayList) view.getTag(R.id.tag_unhandled_key_listeners);
        if (arrayList == null || arrayList.size() - 1 < 0) {
            return null;
        }
        arrayList.get(size).getClass();
        throw new ClassCastException();
    }
}
