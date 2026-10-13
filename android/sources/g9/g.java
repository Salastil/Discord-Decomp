package g9;

import android.graphics.drawable.Animatable;
import android.util.Log;
import com.facebook.drawee.controller.ControllerListener;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public class g implements ControllerListener {

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f9144d = new ArrayList(2);

    public final synchronized void a(ControllerListener controllerListener) {
        this.f9144d.add(controllerListener);
    }

    public final synchronized void b(String str, Exception exc) {
        Log.e("FdingControllerListener", str, exc);
    }

    @Override // com.facebook.drawee.controller.ControllerListener
    public final synchronized void onFailure(String str, Throwable th2) {
        int size = this.f9144d.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ControllerListener controllerListener = (ControllerListener) this.f9144d.get(i5);
                if (controllerListener != null) {
                    controllerListener.onFailure(str, th2);
                }
            } catch (Exception e9) {
                b("InternalListener exception in onFailure", e9);
            }
        }
    }

    @Override // com.facebook.drawee.controller.ControllerListener
    public final synchronized void onFinalImageSet(String str, Object obj, Animatable animatable) {
        int size = this.f9144d.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ControllerListener controllerListener = (ControllerListener) this.f9144d.get(i5);
                if (controllerListener != null) {
                    controllerListener.onFinalImageSet(str, obj, animatable);
                }
            } catch (Exception e9) {
                b("InternalListener exception in onFinalImageSet", e9);
            }
        }
    }

    @Override // com.facebook.drawee.controller.ControllerListener
    public final void onIntermediateImageFailed(String str, Throwable th2) {
        ArrayList arrayList = this.f9144d;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ControllerListener controllerListener = (ControllerListener) arrayList.get(i5);
                if (controllerListener != null) {
                    controllerListener.onIntermediateImageFailed(str, th2);
                }
            } catch (Exception e9) {
                b("InternalListener exception in onIntermediateImageFailed", e9);
            }
        }
    }

    @Override // com.facebook.drawee.controller.ControllerListener
    public final void onIntermediateImageSet(String str, Object obj) {
        ArrayList arrayList = this.f9144d;
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ControllerListener controllerListener = (ControllerListener) arrayList.get(i5);
                if (controllerListener != null) {
                    controllerListener.onIntermediateImageSet(str, obj);
                }
            } catch (Exception e9) {
                b("InternalListener exception in onIntermediateImageSet", e9);
            }
        }
    }

    @Override // com.facebook.drawee.controller.ControllerListener
    public final synchronized void onRelease(String str) {
        int size = this.f9144d.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ControllerListener controllerListener = (ControllerListener) this.f9144d.get(i5);
                if (controllerListener != null) {
                    controllerListener.onRelease(str);
                }
            } catch (Exception e9) {
                b("InternalListener exception in onRelease", e9);
            }
        }
    }

    @Override // com.facebook.drawee.controller.ControllerListener
    public final synchronized void onSubmit(String str, Object obj) {
        int size = this.f9144d.size();
        for (int i5 = 0; i5 < size; i5++) {
            try {
                ControllerListener controllerListener = (ControllerListener) this.f9144d.get(i5);
                if (controllerListener != null) {
                    controllerListener.onSubmit(str, obj);
                }
            } catch (Exception e9) {
                b("InternalListener exception in onSubmit", e9);
            }
        }
    }
}
