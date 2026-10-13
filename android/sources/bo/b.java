package bo;

import com.airbnb.android.react.lottie.LottieAnimationViewManager;
import com.facebook.react.ReactPackage;
import com.facebook.react.bridge.ReactApplicationContext;
import com.github.yamill.orientation.OrientationModule;
import com.imagepicker.ImagePickerModule;
import com.reactnativecommunity.netinfo.NetInfoModule;
import com.reactnativecommunity.slider.ReactSliderManager;
import com.reactnativecommunity.webview.RNCWebViewManager;
import com.reactnativecommunity.webview.RNCWebViewModule;
import com.releaseprofiler.ReleaseProfilerModule;
import com.rnlineargradient.LinearGradientManager;
import fr.greweb.reactnativeviewshot.RNViewShotModule;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;
import org.linusu.RNGetRandomValuesModule;
import org.reactnative.maskedview.RNCMaskedViewManager;

/* loaded from: classes3.dex */
public final class b implements ReactPackage {
    public final /* synthetic */ int a;

    @Override // com.facebook.react.ReactPackage
    public final List createNativeModules(ReactApplicationContext reactContext) {
        switch (this.a) {
            case 0:
                return Arrays.asList(new RNViewShotModule(reactContext));
            case 1:
                ArrayList arrayList = new ArrayList();
                arrayList.add(new ImagePickerModule(reactContext));
                return arrayList;
            case 2:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return b0.c(new RNCWebViewModule(reactContext));
            case 3:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return b0.c(new ReleaseProfilerModule(reactContext));
            case 4:
                return Collections.EMPTY_LIST;
            case 5:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return m0.f13512d;
            case 6:
                return Arrays.asList(new NetInfoModule(reactContext));
            case 7:
                return Collections.EMPTY_LIST;
            case 8:
                return Arrays.asList(new RNGetRandomValuesModule(reactContext));
            case 9:
                return Collections.EMPTY_LIST;
            default:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return b0.c(new OrientationModule(reactContext));
        }
    }

    @Override // com.facebook.react.ReactPackage
    public final List createViewManagers(ReactApplicationContext reactContext) {
        switch (this.a) {
            case 0:
                return Collections.EMPTY_LIST;
            case 1:
                return Collections.EMPTY_LIST;
            case 2:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return b0.c(new RNCWebViewManager());
            case 3:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return m0.f13512d;
            case 4:
                return Collections.singletonList(new LinearGradientManager());
            case 5:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return b0.c(new LottieAnimationViewManager());
            case 6:
                return Collections.EMPTY_LIST;
            case 7:
                return Arrays.asList(new ReactSliderManager());
            case 8:
                return Collections.EMPTY_LIST;
            case 9:
                return Arrays.asList(new RNCMaskedViewManager());
            default:
                Intrinsics.checkNotNullParameter(reactContext, "reactContext");
                return m0.f13512d;
        }
    }
}
