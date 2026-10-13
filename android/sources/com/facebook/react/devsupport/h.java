package com.facebook.react.devsupport;

import android.content.res.Resources;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.util.Log;
import android.util.TypedValue;
import android.view.View;
import android.view.ViewGroup;
import android.widget.ImageView;
import com.discord.R;
import com.facebook.react.modules.devloading.DevLoadingModule;
import com.yalantis.ucrop.UCropActivity;
import io.sentry.ILogger;
import io.sentry.SentryLevel;
import io.sentry.android.core.ViewHierarchyEventProcessor;
import io.sentry.protocol.i0;
import io.sentry.protocol.j0;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicReference;

/* loaded from: classes3.dex */
public final /* synthetic */ class h implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4905d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4906e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4907i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f4908v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f4909w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f4910x;

    public /* synthetic */ h(DefaultDevLoadingViewImplementation defaultDevLoadingViewImplementation, String str, Double d6, Double d7, Boolean bool) {
        this.f4905d = 1;
        this.f4906e = defaultDevLoadingViewImplementation;
        this.f4907i = str;
        this.f4908v = d6;
        this.f4909w = d7;
        this.f4910x = bool;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int parseColor;
        int i5 = this.f4905d;
        Object obj = this.f4906e;
        Object obj2 = this.f4910x;
        Object obj3 = this.f4909w;
        Object obj4 = this.f4908v;
        Object obj5 = this.f4907i;
        switch (i5) {
            case 0:
                DefaultDevLoadingViewImplementation.updateProgress$lambda$1((Integer) obj4, (Integer) obj3, (Integer) obj2, (DefaultDevLoadingViewImplementation) obj, (String) obj5);
                break;
            case 1:
                DefaultDevLoadingViewImplementation.showMessage$lambda$0((DefaultDevLoadingViewImplementation) obj, (String) obj5, (Double) obj4, (Double) obj3, (Boolean) obj2);
                break;
            case 2:
                DevLoadingModule.showMessage$lambda$0((DevLoadingModule) obj4, (String) obj5, (Double) obj3, (Double) obj2, (Boolean) obj);
                break;
            case 3:
                AtomicReference atomicReference = (AtomicReference) obj4;
                View view = (View) obj3;
                List list = (List) obj2;
                CountDownLatch countDownLatch = (CountDownLatch) obj;
                ILogger iLogger = (ILogger) obj5;
                try {
                    ArrayList arrayList = new ArrayList(1);
                    i0 i0Var = new i0("android_view_system", arrayList);
                    j0 d6 = ViewHierarchyEventProcessor.d(view);
                    arrayList.add(d6);
                    ViewHierarchyEventProcessor.a(view, d6, list);
                    atomicReference.set(i0Var);
                    countDownLatch.countDown();
                    break;
                } catch (Throwable th2) {
                    iLogger.k(SentryLevel.ERROR, "Failed to process view hierarchy.", th2);
                    return;
                }
            default:
                String str = (String) obj5;
                UCropActivity uCropActivity = (UCropActivity) obj4;
                String str2 = (String) obj3;
                String str3 = (String) obj2;
                String str4 = (String) obj;
                if (str != null) {
                    try {
                        Resources resources = uCropActivity.getResources();
                        View findViewById = uCropActivity.findViewById(R.id.wrapper_controls);
                        if (findViewById == null) {
                            Log.w("ImageCropPicker", "Could not find wrapper_controls view");
                        } else if (findViewById instanceof ViewGroup) {
                            ViewGroup viewGroup = (ViewGroup) findViewById;
                            if (viewGroup.getChildCount() > 0) {
                                View childAt = viewGroup.getChildAt(0);
                                if (childAt instanceof ImageView) {
                                    GradientDrawable gradientDrawable = new GradientDrawable();
                                    gradientDrawable.setShape(0);
                                    float applyDimension = TypedValue.applyDimension(1, 12.0f, resources.getDisplayMetrics());
                                    gradientDrawable.setCornerRadii(new float[]{applyDimension, applyDimension, applyDimension, applyDimension, 0.0f, 0.0f, 0.0f, 0.0f});
                                    gradientDrawable.setColor(Color.parseColor(str));
                                    childAt.setBackground(gradientDrawable);
                                }
                            }
                        }
                    } catch (Exception e9) {
                        Log.e("ImageCropPicker", "Error applying controls background color", e9);
                    }
                }
                if (str2 != null) {
                    try {
                        View findViewById2 = uCropActivity.findViewById(R.id.wrapper_states);
                        if (findViewById2 == null) {
                            Log.w("ImageCropPicker", "Could not find wrapper_states view");
                        } else {
                            findViewById2.setBackgroundColor(Color.parseColor(str2));
                        }
                    } catch (Exception e10) {
                        Log.e("ImageCropPicker", "Error applying controls bar background color", e10);
                    }
                }
                if (str3 != null || str4 != null) {
                    if (str3 != null) {
                        try {
                            parseColor = Color.parseColor(str3);
                        } catch (Exception e11) {
                            Log.e("ImageCropPicker", "Error applying widget colors", e11);
                        }
                    } else {
                        parseColor = -1;
                    }
                    int parseColor2 = str4 != null ? Color.parseColor(str4) : -1;
                    jl.e.c(uCropActivity, R.id.state_aspect_ratio, R.id.image_view_state_aspect_ratio, R.id.text_view_crop, parseColor, parseColor2);
                    jl.e.c(uCropActivity, R.id.state_rotate, R.id.image_view_state_rotate, R.id.text_view_rotate, parseColor, parseColor2);
                    jl.e.c(uCropActivity, R.id.state_scale, R.id.image_view_state_scale, R.id.text_view_scale, parseColor, parseColor2);
                    jl.e.b(uCropActivity, parseColor, parseColor2);
                    if (parseColor2 != -1) {
                        try {
                            View findViewById3 = uCropActivity.findViewById(R.id.rotate_scroll_wheel);
                            if (findViewById3 != null) {
                                jl.e.s(parseColor2, findViewById3);
                            }
                            View findViewById4 = uCropActivity.findViewById(R.id.scale_scroll_wheel);
                            if (findViewById4 != null) {
                                jl.e.s(parseColor2, findViewById4);
                                break;
                            }
                        } catch (Exception e12) {
                            Log.e("ImageCropPicker", "Error applying wheel tick colors", e12);
                            return;
                        }
                    }
                }
                break;
        }
    }

    public /* synthetic */ h(DevLoadingModule devLoadingModule, String str, Double d6, Double d7, Boolean bool) {
        this.f4905d = 2;
        this.f4908v = devLoadingModule;
        this.f4907i = str;
        this.f4909w = d6;
        this.f4910x = d7;
        this.f4906e = bool;
    }

    public /* synthetic */ h(Serializable serializable, Object obj, Object obj2, Object obj3, Object obj4, int i5) {
        this.f4905d = i5;
        this.f4908v = serializable;
        this.f4909w = obj;
        this.f4910x = obj2;
        this.f4906e = obj3;
        this.f4907i = obj4;
    }

    public /* synthetic */ h(jl.a aVar, String str, UCropActivity uCropActivity, String str2, String str3, String str4) {
        this.f4905d = 4;
        this.f4907i = str;
        this.f4908v = uCropActivity;
        this.f4909w = str2;
        this.f4910x = str3;
        this.f4906e = str4;
    }
}
