package f5;

import com.brentvatne.exoplayer.ReactExoplayerViewManager;
import com.facebook.react.ReactPackage;
import com.facebook.react.bridge.ReactApplicationContext;
import java.util.Collections;
import java.util.List;
import u4.b;

/* loaded from: classes.dex */
public final class a implements ReactPackage {
    public b a;

    @Override // com.facebook.react.ReactPackage
    public final List createNativeModules(ReactApplicationContext reactApplicationContext) {
        return Collections.EMPTY_LIST;
    }

    @Override // com.facebook.react.ReactPackage
    public final List createViewManagers(ReactApplicationContext reactApplicationContext) {
        if (this.a == null) {
            this.a = new b(reactApplicationContext);
        }
        return Collections.singletonList(new ReactExoplayerViewManager(this.a));
    }
}
