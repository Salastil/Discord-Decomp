package com.discord.permissions;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.graphics.drawable.Drawable;
import android.os.CancellationSignal;
import android.view.MotionEvent;
import android.view.View;
import androidx.credentials.playservices.CredentialProviderPlayServicesImpl;
import androidx.credentials.playservices.controllers.identityauth.HiddenActivity;
import androidx.credentials.playservices.controllers.identitycredentials.IdentityCredentialApiHiddenActivity;
import bn.e;
import com.discord.chatreplay.logger.DebugRowLogger;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.phone_verification.SmsAutofillManagerModule;
import com.discord.qr.scanner.QRScanner;
import com.discord.qr.scanner.QRScannerViewManager;
import com.discord.react_gesture_handler.nested_touch.NestedScrollOnTouchListener;
import com.facebook.react.bridge.JSBundleLoader;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.runtime.ReactHostImpl;
import com.facebook.react.runtime.ReactInstance;
import com.facebook.react.runtime.internal.bolts.Task;
import com.facebook.react.uimanager.UIManagerHelper;
import com.facebook.react.uimanager.events.EventDispatcher;
import com.swmansion.rnscreens.ScreenFragmentWrapper;
import com.swmansion.rnscreens.ScreenStack;
import fo.n;
import hn.h;
import hn.i;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStreamWriter;
import java.util.List;
import java.util.Map;
import jc.b0;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import se.f;
import sf.m;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4330d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4331e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4332i;

    public /* synthetic */ b(int i5, Object obj, Object obj2) {
        this.f4330d = i5;
        this.f4331e = obj;
        this.f4332i = obj2;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit reject$lambda$3;
        Unit reject$lambda$4;
        Unit reject$lambda$8;
        Unit onSupplementalMotionEventReceived$lambda$2;
        Unit loadBundle$lambda$20;
        Unit orCreateReactInstanceTask$lambda$45$lambda$43;
        Unit smsAutofillManager$lambda$0;
        Unit createViewInstance$lambda$2$lambda$0;
        Unit writeJson$lambda$3$lambda$2;
        Drawable drawable;
        switch (this.f4330d) {
            case 0:
                reject$lambda$3 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$3((String) this.f4331e, (String) this.f4332i, (Promise) obj);
                return reject$lambda$3;
            case 1:
                reject$lambda$4 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$4((String) this.f4331e, (Throwable) this.f4332i, (Promise) obj);
                return reject$lambda$4;
            case 2:
                reject$lambda$8 = NativePermissionManagerModule$createMultiPromiseResolver$1.reject$lambda$8((String) this.f4331e, (WritableMap) this.f4332i, (Promise) obj);
                return reject$lambda$8;
            case 3:
                onSupplementalMotionEventReceived$lambda$2 = NestedScrollOnTouchListener.onSupplementalMotionEventReceived$lambda$2((NestedScrollOnTouchListener) this.f4331e, (View) this.f4332i, (MotionEvent) obj);
                return onSupplementalMotionEventReceived$lambda$2;
            case 4:
                loadBundle$lambda$20 = ReactHostImpl.loadBundle$lambda$20((ReactHostImpl) this.f4331e, "loadBundle()", (JSBundleLoader) this.f4332i, (ReactInstance) obj);
                return loadBundle$lambda$20;
            case 5:
                orCreateReactInstanceTask$lambda$45$lambda$43 = ReactHostImpl.getOrCreateReactInstanceTask$lambda$45$lambda$43((ReactHostImpl) this.f4332i, (String) this.f4331e, (Task) obj);
                return orCreateReactInstanceTask$lambda$45$lambda$43;
            case 6:
                return Boolean.valueOf(ScreenStack.b((Ref.ObjectRef) this.f4331e, (ScreenStack) this.f4332i, (ScreenFragmentWrapper) obj));
            case 7:
                h currentNavState = (h) this.f4332i;
                String preventedScreenKey = (String) this.f4331e;
                i observer = (i) obj;
                Intrinsics.checkNotNullParameter(observer, "observer");
                in.a aVar = (in.a) observer;
                aVar.getClass();
                Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
                Intrinsics.checkNotNullParameter(preventedScreenKey, "preventedScreenKey");
                in.c eventEmitter$react_native_screens_release = aVar.getEventEmitter$react_native_screens_release();
                eventEmitter$react_native_screens_release.getClass();
                Intrinsics.checkNotNullParameter(currentNavState, "currentNavState");
                Intrinsics.checkNotNullParameter(preventedScreenKey, "preventedScreenKey");
                ((EventDispatcher) eventEmitter$react_native_screens_release.f13124c).dispatchEvent(new jn.b(UIManagerHelper.getSurfaceId((ReactContext) eventEmitter$react_native_screens_release.f13123b), eventEmitter$react_native_screens_release.a, currentNavState, preventedScreenKey));
                return Unit.a;
            case 8:
                smsAutofillManager$lambda$0 = SmsAutofillManagerModule.smsAutofillManager$lambda$0((SmsAutofillManagerModule) this.f4331e, (ReactApplicationContext) this.f4332i, (String) obj);
                return smsAutofillManager$lambda$0;
            case 9:
                createViewInstance$lambda$2$lambda$0 = QRScannerViewManager.createViewInstance$lambda$2$lambda$0((QRScannerViewManager) this.f4331e, (QRScanner) this.f4332i, (String) obj);
                return createViewInstance$lambda$2$lambda$0;
            case 10:
                writeJson$lambda$3$lambda$2 = DebugRowLogger.writeJson$lambda$3$lambda$2((Ref.BooleanRef) this.f4331e, (OutputStreamWriter) this.f4332i, (String) obj);
                return writeJson$lambda$3$lambda$2;
            case 11:
                ((or.d) this.f4331e).f16183i.removeCallbacks((b0) this.f4332i);
                return Unit.a;
            case 12:
                pl.c cVar = (pl.c) this.f4331e;
                File file = (File) this.f4332i;
                InputStream inputStream = (InputStream) obj;
                if (inputStream == null) {
                    throw new FileNotFoundException("No input stream was found for the source file");
                }
                if (((Number) cVar.f16438b.invoke(inputStream, new FileOutputStream(file))).longValue() != 0) {
                    return Unit.a;
                }
                throw new IOException("No data was copied to the destination file");
            case 13:
                CancellationSignal cancellationSignal = (CancellationSignal) this.f4331e;
                u1.d dVar = (u1.d) this.f4332i;
                Context context = dVar.f18785e;
                f fVar = (f) obj;
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (s1.f.a(cancellationSignal)) {
                    return Unit.a;
                }
                Intent intent = new Intent(context, (Class<?>) HiddenActivity.class);
                t1.d.a(dVar.f18789i, intent, "BEGIN_SIGN_IN");
                intent.putExtra("EXTRA_FLOW_PENDING_INTENT", fVar.f17976d);
                try {
                    context.startActivity(intent);
                } catch (Exception unused) {
                    h8.a onResultOrException = new h8.a(8, dVar);
                    Intrinsics.checkNotNullParameter(onResultOrException, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (!s1.f.a(cancellationSignal)) {
                        onResultOrException.invoke();
                    }
                }
                return Unit.a;
            case 14:
                CancellationSignal cancellationSignal2 = (CancellationSignal) this.f4331e;
                v1.h hVar = (v1.h) this.f4332i;
                Context context2 = hVar.f19168e;
                PendingIntent result = (PendingIntent) obj;
                Intrinsics.checkNotNullParameter(result, "result");
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (s1.f.a(cancellationSignal2)) {
                    return Unit.a;
                }
                Intent intent2 = new Intent(context2, (Class<?>) HiddenActivity.class);
                t1.d.a(hVar.f19172i, intent2, "CREATE_PUBLIC_KEY_CREDENTIAL");
                intent2.putExtra("EXTRA_FLOW_PENDING_INTENT", result);
                try {
                    context2.startActivity(intent2);
                } catch (Exception unused2) {
                    h8.a onResultOrException2 = new h8.a(11, hVar);
                    Intrinsics.checkNotNullParameter(onResultOrException2, "onResultOrException");
                    CredentialProviderPlayServicesImpl.Companion.getClass();
                    if (!s1.f.a(cancellationSignal2)) {
                        onResultOrException2.invoke();
                    }
                }
                return Unit.a;
            case 15:
                Function1 function1 = (Function1) this.f4331e;
                Function1 function12 = (Function1) this.f4332i;
                function1.invoke(obj);
                function12.invoke(obj);
                return Unit.a;
            case 16:
                CancellationSignal cancellationSignal3 = (CancellationSignal) this.f4331e;
                y1.a aVar2 = (y1.a) this.f4332i;
                Context context3 = aVar2.f20596e;
                m mVar = (m) obj;
                CredentialProviderPlayServicesImpl.Companion.getClass();
                if (s1.f.a(cancellationSignal3)) {
                    return Unit.a;
                }
                Intent intent3 = new Intent(context3, (Class<?>) IdentityCredentialApiHiddenActivity.class);
                intent3.setFlags(KeyCommandDescriptor.ModifierFlags.ALPHA_SHIFT);
                intent3.putExtra("RESULT_RECEIVER", t1.d.d(aVar2.f20600i));
                intent3.putExtra("EXTRA_FLOW_PENDING_INTENT", mVar.f18006d);
                intent3.putExtra("EXTRA_ERROR_NAME", "GET_UNKNOWN");
                context3.startActivity(intent3);
                return Unit.a;
            default:
                zm.c cVar2 = (zm.c) this.f4332i;
                String id2 = (String) this.f4331e;
                um.d result2 = (um.d) obj;
                Intrinsics.checkNotNullParameter(result2, "result");
                if (Intrinsics.areEqual(result2, um.c.a)) {
                    drawable = (Drawable) cVar2.V.get(id2);
                } else {
                    if (!(result2 instanceof um.b)) {
                        throw new n();
                    }
                    Map map = cVar2.V;
                    drawable = ((um.b) result2).a;
                    cVar2.V = v0.j(map, new Pair(id2, drawable));
                }
                e toolbarMenu = cVar2.getToolbarMenu();
                toolbarMenu.getClass();
                Intrinsics.checkNotNullParameter(id2, "id");
                List list = toolbarMenu.f3058b;
                List b10 = e.b(list, id2, drawable);
                e a = b10 != list ? e.a(toolbarMenu, b10) : toolbarMenu;
                if (a != toolbarMenu) {
                    cVar2.setToolbarMenu$react_native_screens_release(a);
                    if (!cVar2.f21292g0) {
                        cVar2.e();
                    }
                }
                return Unit.a;
        }
    }

    public /* synthetic */ b(Object obj, String str, int i5) {
        this.f4330d = i5;
        this.f4332i = obj;
        this.f4331e = str;
    }
}
