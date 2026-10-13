package mg;

import android.animation.Animator;
import android.animation.AnimatorInflater;
import android.animation.AnimatorSet;
import android.animation.ObjectAnimator;
import android.animation.TimeInterpolator;
import android.content.Context;
import android.util.Log;
import androidx.collection.SimpleArrayMap;
import com.facebook.react.views.textinput.ReactEditTextInputConnectionWrapper;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class c {
    public final SimpleArrayMap a = new SimpleArrayMap(0);

    /* renamed from: b, reason: collision with root package name */
    public final SimpleArrayMap f14497b = new SimpleArrayMap(0);

    public static c a(Context context, int i5) {
        try {
            Animator loadAnimator = AnimatorInflater.loadAnimator(context, i5);
            if (loadAnimator instanceof AnimatorSet) {
                return b(((AnimatorSet) loadAnimator).getChildAnimations());
            }
            if (loadAnimator == null) {
                return null;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add(loadAnimator);
            return b(arrayList);
        } catch (Exception e9) {
            Log.w("MotionSpec", "Can't load animation resource ID #0x" + Integer.toHexString(i5), e9);
            return null;
        }
    }

    public static c b(ArrayList arrayList) {
        c cVar = new c();
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            Animator animator = (Animator) arrayList.get(i5);
            if (!(animator instanceof ObjectAnimator)) {
                throw new IllegalArgumentException("Animator must be an ObjectAnimator: " + animator);
            }
            ObjectAnimator objectAnimator = (ObjectAnimator) animator;
            cVar.f14497b.put(objectAnimator.getPropertyName(), objectAnimator.getValues());
            String propertyName = objectAnimator.getPropertyName();
            long startDelay = objectAnimator.getStartDelay();
            long duration = objectAnimator.getDuration();
            TimeInterpolator interpolator = objectAnimator.getInterpolator();
            d dVar = new d();
            dVar.f14500d = 0;
            dVar.f14501e = 1;
            dVar.a = startDelay;
            dVar.f14498b = duration;
            dVar.f14499c = interpolator;
            dVar.f14500d = objectAnimator.getRepeatCount();
            dVar.f14501e = objectAnimator.getRepeatMode();
            cVar.a.put(propertyName, dVar);
        }
        return cVar;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof c) {
            return this.a.equals(((c) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return ReactEditTextInputConnectionWrapper.NEWLINE_RAW_VALUE + c.class.getName() + '{' + Integer.toHexString(System.identityHashCode(this)) + " timings: " + this.a + "}\n";
    }
}
