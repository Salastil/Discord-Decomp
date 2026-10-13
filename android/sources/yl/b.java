package yl;

import android.content.DialogInterface;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.Window;
import androidx.activity.ComponentDialog;
import androidx.core.view.j0;
import androidx.core.view.s0;
import bm.d;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.facebook.react.uimanager.events.EventDispatcherListener;
import com.facebook.react.views.modal.ReactModalHostView;
import com.facebook.react.views.modal.ShowEvent;
import com.facebook.react.views.view.ReactViewGroup;
import kotlin.jvm.internal.Intrinsics;
import wl.f;
import wl.g;

/* loaded from: classes3.dex */
public final class b implements EventDispatcherListener {
    public final d a;

    /* renamed from: b, reason: collision with root package name */
    public final ThemedReactContext f20956b;

    /* renamed from: c, reason: collision with root package name */
    public final g f20957c;

    /* renamed from: d, reason: collision with root package name */
    public final bm.c f20958d;

    /* renamed from: e, reason: collision with root package name */
    public final UIManager f20959e;

    /* renamed from: f, reason: collision with root package name */
    public final EventDispatcher f20960f;

    public b(d view, ThemedReactContext reactContext, g config, bm.c callback) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(callback, "callback");
        this.a = view;
        this.f20956b = reactContext;
        this.f20957c = config;
        this.f20958d = callback;
        Intrinsics.checkNotNullParameter(reactContext, "<this>");
        this.f20959e = UIManagerHelper.getUIManager(reactContext, 2);
        Intrinsics.checkNotNullParameter(reactContext, "<this>");
        this.f20960f = UIManagerHelper.getEventDispatcher(reactContext, 2);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:36:? A[RETURN, SYNTHETIC] */
    @Override // com.facebook.react.uimanager.events.EventDispatcherListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void onEventDispatch(Event event) {
        ReactModalHostView reactModalHostView;
        View decorView;
        View resolveView;
        Intrinsics.checkNotNullParameter(event, "event");
        if (!Intrinsics.areEqual(event.internal_getEventNameCompat(), ShowEvent.EVENT_NAME)) {
            return;
        }
        View view = null;
        try {
            UIManager uIManager = this.f20959e;
            resolveView = uIManager != null ? uIManager.resolveView(event.getViewTag()) : null;
        } catch (Exception unused) {
            boolean z5 = c.a;
            String message = "Can not resolve view for Modal#" + event.getViewTag();
            Intrinsics.checkNotNullParameter(message, "message");
        }
        if (resolveView instanceof ReactModalHostView) {
            reactModalHostView = (ReactModalHostView) resolveView;
            if (reactModalHostView != null) {
                return;
            }
            ComponentDialog dialog = reactModalHostView.getDialog();
            Window window = dialog != null ? dialog.getWindow() : null;
            if (window != null && (decorView = window.getDecorView()) != null) {
                view = decorView.getRootView();
            }
            ViewGroup viewGroup = (ViewGroup) view;
            if (viewGroup != null) {
                ThemedReactContext themedReactContext = this.f20956b;
                final ReactViewGroup reactViewGroup = new ReactViewGroup(themedReactContext);
                reactViewGroup.setLayoutParams(new ViewGroup.LayoutParams(0, 0));
                final f fVar = new f(this.a, viewGroup, themedReactContext, this.f20957c);
                viewGroup.addView(reactViewGroup);
                if (c.a) {
                    f fVar2 = (f) this.f20958d.invoke();
                    if (fVar2 != null) {
                        fVar2.L = true;
                    }
                    s0.r(viewGroup, fVar);
                    j0.m(reactViewGroup, fVar);
                    fVar.g(Boolean.FALSE, Double.valueOf(0.0d));
                }
                if (dialog != null) {
                    dialog.setOnDismissListener(new DialogInterface.OnDismissListener() { // from class: yl.a
                        @Override // android.content.DialogInterface.OnDismissListener
                        public final void onDismiss(DialogInterface dialogInterface) {
                            f fVar3 = f.this;
                            fVar3.g(null, null);
                            fVar3.J = null;
                            fVar3.f19886e.getViewTreeObserver().removeOnGlobalFocusChangeListener(fVar3.M);
                            ReactViewGroup reactViewGroup2 = reactViewGroup;
                            ViewParent parent = reactViewGroup2.getParent();
                            ViewGroup viewGroup2 = parent instanceof ViewGroup ? (ViewGroup) parent : null;
                            if (viewGroup2 != null) {
                                viewGroup2.removeView(reactViewGroup2);
                            }
                            f fVar4 = (f) this.f20958d.invoke();
                            if (fVar4 != null) {
                                fVar4.L = false;
                            }
                        }
                    });
                }
                if (window != null) {
                    window.setSoftInputMode(48);
                    return;
                }
                return;
            }
            return;
        }
        reactModalHostView = null;
        if (reactModalHostView != null) {
        }
    }
}
