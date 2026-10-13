package jk;

import android.util.Log;
import com.facebook.datasource.DataSubscriber;
import com.henninghall.date_picker.pickers.AndroidNative;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* loaded from: classes3.dex */
public final class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12813d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f12814e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f12815i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f12816v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f12817w;

    public b(AndroidNative androidNative, AndroidNative androidNative2, boolean z5, boolean z6) {
        this.f12817w = androidNative;
        this.f12816v = androidNative2;
        this.f12814e = z5;
        this.f12815i = z6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0074, code lost:
    
        if (r2 == false) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:31:0x0063, code lost:
    
        r4.setValue((r0 + r5) % r4.getMaxValue());
     */
    /* JADX WARN: Code restructure failed: missing block: B:32:0x0062, code lost:
    
        r5 = 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x007e, code lost:
    
        if (r2 == false) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:40:0x0088, code lost:
    
        if (r2 == false) goto L28;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x0060, code lost:
    
        if (r2 == false) goto L28;
     */
    @Override // java.lang.Runnable
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void run() {
        int value;
        int i5 = this.f12813d;
        boolean z5 = this.f12815i;
        boolean z6 = this.f12814e;
        Object obj = this.f12816v;
        Object obj2 = this.f12817w;
        switch (i5) {
            case 0:
                AndroidNative androidNative = (AndroidNative) obj2;
                AndroidNative androidNative2 = (AndroidNative) obj;
                int i6 = AndroidNative.M0;
                androidNative.getClass();
                try {
                    try {
                        try {
                            Method declaredMethod = androidNative.getClass().getSuperclass().getDeclaredMethod("changeValueByOne", Boolean.TYPE);
                            declaredMethod.setAccessible(true);
                            declaredMethod.invoke(androidNative2, Boolean.valueOf(z6));
                        } catch (IllegalAccessException e9) {
                            Log.w("changeValueByOne", e9);
                            value = androidNative.getValue();
                            break;
                        } catch (IllegalArgumentException e10) {
                            Log.w("changeValueByOne", e10);
                            value = androidNative.getValue();
                            break;
                        }
                    } catch (NoSuchMethodException e11) {
                        Log.w("changeValueByOne", e11);
                        value = androidNative.getValue();
                        break;
                    } catch (InvocationTargetException e12) {
                        Log.w("changeValueByOne", e12);
                        value = androidNative.getValue();
                        break;
                    }
                    if (z5) {
                        androidNative.s();
                        return;
                    }
                    return;
                } catch (Throwable th2) {
                    androidNative.setValue((androidNative.getValue() + (z6 ? 1 : -1)) % androidNative.getMaxValue());
                    throw th2;
                }
            default:
                y8.a aVar = (y8.a) obj2;
                DataSubscriber dataSubscriber = (DataSubscriber) obj;
                if (z6) {
                    dataSubscriber.onFailure(aVar);
                    return;
                } else if (z5) {
                    dataSubscriber.onCancellation(aVar);
                    return;
                } else {
                    dataSubscriber.onNewResult(aVar);
                    return;
                }
        }
    }

    public b(y8.a aVar, boolean z5, DataSubscriber dataSubscriber, boolean z6) {
        this.f12817w = aVar;
        this.f12814e = z5;
        this.f12816v = dataSubscriber;
        this.f12815i = z6;
    }
}
