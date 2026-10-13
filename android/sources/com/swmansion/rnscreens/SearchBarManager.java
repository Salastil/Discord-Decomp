package com.swmansion.rnscreens;

import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewGroupManager;
import com.facebook.react.uimanager.ViewManagerDelegate;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.RNSSearchBarManagerDelegate;
import com.facebook.react.viewmanagers.RNSSearchBarManagerInterface;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@ReactModule(name = SearchBarManager.REACT_CLASS)
@Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u000e\n\u0002\u0010$\n\u0002\u0010\u0000\n\u0002\b\u0017\b\u0007\u0018\u0000 @2\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u0001AB\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0015\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\u00020\u0006H\u0014¢\u0006\u0004\b\u0007\u0010\bJ\u000f\u0010\n\u001a\u00020\tH\u0016¢\u0006\u0004\b\n\u0010\u000bJ\u0017\u0010\u000e\u001a\u00020\u00022\u0006\u0010\r\u001a\u00020\fH\u0014¢\u0006\u0004\b\u000e\u0010\u000fJ\u0017\u0010\u0012\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u0002H\u0014¢\u0006\u0004\b\u0012\u0010\u0013J!\u0010\u0015\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u0014\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b\u0015\u0010\u0016J\u001f\u0010\u0019\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u0017H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ!\u0010\u001d\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u001c\u001a\u0004\u0018\u00010\u001bH\u0016¢\u0006\u0004\b\u001d\u0010\u001eJ\u001f\u0010 \u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010\u001f\u001a\u00020\u0017H\u0016¢\u0006\u0004\b \u0010\u001aJ!\u0010\"\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010!\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b\"\u0010\u0016J!\u0010$\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010#\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b$\u0010\u0016J!\u0010%\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u001c\u001a\u0004\u0018\u00010\u001bH\u0016¢\u0006\u0004\b%\u0010\u001eJ!\u0010&\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u001c\u001a\u0004\u0018\u00010\u001bH\u0016¢\u0006\u0004\b&\u0010\u001eJ!\u0010'\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010\u001c\u001a\u0004\u0018\u00010\u001bH\u0016¢\u0006\u0004\b'\u0010\u001eJ\u001f\u0010)\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u0010(\u001a\u00020\u0017H\u0016¢\u0006\u0004\b)\u0010\u001aJ\u001b\u0010,\u001a\u000e\u0012\u0004\u0012\u00020\t\u0012\u0004\u0012\u00020+0*H\u0016¢\u0006\u0004\b,\u0010-J\u0019\u0010.\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u0002H\u0016¢\u0006\u0004\b.\u0010\u0013J\u0019\u0010/\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u0002H\u0016¢\u0006\u0004\b/\u0010\u0013J\u0019\u00100\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u0002H\u0016¢\u0006\u0004\b0\u0010\u0013J!\u00102\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\u0006\u00101\u001a\u00020\u0017H\u0016¢\u0006\u0004\b2\u0010\u001aJ#\u00104\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\b\u00103\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b4\u0010\u0016J\u0019\u00105\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u0002H\u0016¢\u0006\u0004\b5\u0010\u0013J!\u00106\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\b\u0010#\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b6\u0010\u0016J\u001f\u00108\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u00022\u0006\u00107\u001a\u00020\u0017H\u0016¢\u0006\u0004\b8\u0010\u001aJ!\u00109\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\u0006\u00107\u001a\u00020\u0017H\u0016¢\u0006\u0004\b9\u0010\u001aJ#\u0010:\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\b\u00107\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b:\u0010\u0016J#\u0010;\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\b\u00107\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b;\u0010\u0016J#\u0010<\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\b\u00107\u001a\u0004\u0018\u00010\tH\u0016¢\u0006\u0004\b<\u0010\u0016J#\u0010=\u001a\u00020\u00112\b\u0010\u0010\u001a\u0004\u0018\u00010\u00022\b\u00107\u001a\u0004\u0018\u00010\u001bH\u0016¢\u0006\u0004\b=\u0010\u001eR\u001a\u0010>\u001a\b\u0012\u0004\u0012\u00020\u00020\u00068\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b>\u0010?¨\u0006B"}, d2 = {"Lcom/swmansion/rnscreens/SearchBarManager;", "Lcom/facebook/react/uimanager/ViewGroupManager;", "Lcom/swmansion/rnscreens/r0;", "Lcom/facebook/react/viewmanagers/RNSSearchBarManagerInterface;", "<init>", "()V", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "getDelegate", "()Lcom/facebook/react/uimanager/ViewManagerDelegate;", "", "getName", "()Ljava/lang/String;", "Lcom/facebook/react/uimanager/ThemedReactContext;", "context", "createViewInstance", "(Lcom/facebook/react/uimanager/ThemedReactContext;)Lcom/swmansion/rnscreens/r0;", "view", "", "onAfterUpdateTransaction", "(Lcom/swmansion/rnscreens/r0;)V", "autoCapitalize", "setAutoCapitalize", "(Lcom/swmansion/rnscreens/r0;Ljava/lang/String;)V", "", "autoFocus", "setAutoFocus", "(Lcom/swmansion/rnscreens/r0;Z)V", "", ViewProps.COLOR, "setBarTintColor", "(Lcom/swmansion/rnscreens/r0;Ljava/lang/Integer;)V", "disableBackButtonOverride", "setDisableBackButtonOverride", "inputType", "setInputType", "placeholder", "setPlaceholder", "setTextColor", "setHeaderIconColor", "setHintTextColor", "shouldShowHintSearchIcon", "setShouldShowHintSearchIcon", "", "", "getExportedCustomDirectEventTypeConstants", "()Ljava/util/Map;", "blur", "focus", "clearText", "flag", "toggleCancelButton", "text", "setText", "cancelSearch", "setPlacement", "value", "setAllowToolbarIntegration", "setHideWhenScrolling", "setObscureBackground", "setHideNavigationBar", "setCancelButtonText", "setTintColor", "delegate", "Lcom/facebook/react/uimanager/ViewManagerDelegate;", "Companion", "com/swmansion/rnscreens/k0", "react-native-screens_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class SearchBarManager extends ViewGroupManager<r0> implements RNSSearchBarManagerInterface<r0> {

    @NotNull
    public static final k0 Companion = new k0();

    @NotNull
    public static final String REACT_CLASS = "RNSSearchBar";

    @NotNull
    private final ViewManagerDelegate<r0> delegate;

    public SearchBarManager() {
        super(null, 1, null);
        this.delegate = new RNSSearchBarManagerDelegate(this);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public ViewManagerDelegate<r0> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return v0.f(new Pair("topSearchBlur", v0.f(new Pair("registrationName", "onSearchBlur"))), new Pair("topChangeText", v0.f(new Pair("registrationName", "onChangeText"))), new Pair("topClose", v0.f(new Pair("registrationName", "onClose"))), new Pair("topSearchFocus", v0.f(new Pair("registrationName", "onSearchFocus"))), new Pair("topOpen", v0.f(new Pair("registrationName", "onOpen"))), new Pair("topSearchButtonPress", v0.f(new Pair("registrationName", "onSearchButtonPress"))));
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return REACT_CLASS;
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setAllowToolbarIntegration(@NotNull r0 view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setCancelButtonText(r0 view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setHideNavigationBar(r0 view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setHideWhenScrolling(r0 view, boolean value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setObscureBackground(r0 view, String value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setPlacement(@NotNull r0 view, String placeholder) {
        Intrinsics.checkNotNullParameter(view, "view");
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setTintColor(r0 view, Integer value) {
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void toggleCancelButton(r0 view, boolean flag) {
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void blur(r0 view) {
        if (view != null) {
            view.f();
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void cancelSearch(r0 view) {
        if (view != null) {
            view.g();
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void clearText(r0 view) {
        if (view != null) {
            view.h();
        }
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public r0 createViewInstance(@NotNull ThemedReactContext context) {
        Intrinsics.checkNotNullParameter(context, "context");
        return new r0(context);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void focus(r0 view) {
        if (view != null) {
            view.i();
        }
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onAfterUpdateTransaction(@NotNull r0 view) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onAfterUpdateTransaction((SearchBarManager) view);
        view.l();
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:18:0x0036, code lost:
    
        if (r3.equals("none") != false) goto L24;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x003f, code lost:
    
        if (r3.equals("systemDefault") != false) goto L24;
     */
    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setAutoCapitalize(@NotNull r0 view, String autoCapitalize) {
        l0 l0Var;
        Intrinsics.checkNotNullParameter(view, "view");
        if (autoCapitalize != null) {
            switch (autoCapitalize.hashCode()) {
                case -721225454:
                    break;
                case 3387192:
                    break;
                case 113318569:
                    if (autoCapitalize.equals("words")) {
                        l0Var = l0.f6765e;
                        view.setAutoCapitalize(l0Var);
                    }
                    throw new JSApplicationIllegalArgumentException("Forbidden auto capitalize value passed");
                case 490141296:
                    if (autoCapitalize.equals("sentences")) {
                        l0Var = l0.f6766i;
                        view.setAutoCapitalize(l0Var);
                    }
                    throw new JSApplicationIllegalArgumentException("Forbidden auto capitalize value passed");
                case 1245424234:
                    if (autoCapitalize.equals("characters")) {
                        l0Var = l0.f6767v;
                        view.setAutoCapitalize(l0Var);
                    }
                    throw new JSApplicationIllegalArgumentException("Forbidden auto capitalize value passed");
                default:
                    throw new JSApplicationIllegalArgumentException("Forbidden auto capitalize value passed");
            }
        }
        l0Var = l0.f6764d;
        view.setAutoCapitalize(l0Var);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setAutoFocus(@NotNull r0 view, boolean autoFocus) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setAutoFocus(autoFocus);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setBarTintColor(@NotNull r0 view, Integer color) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTintColor(color);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setDisableBackButtonOverride(@NotNull r0 view, boolean disableBackButtonOverride) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setShouldOverrideBackButton(!disableBackButtonOverride);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setHeaderIconColor(@NotNull r0 view, Integer color) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setHeaderIconColor(color);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setHintTextColor(@NotNull r0 view, Integer color) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setHintTextColor(color);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x002b, code lost:
    
        if (r3.equals("text") != false) goto L21;
     */
    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void setInputType(@NotNull r0 view, String inputType) {
        q0 q0Var;
        Intrinsics.checkNotNullParameter(view, "view");
        if (inputType != null) {
            switch (inputType.hashCode()) {
                case -1034364087:
                    if (inputType.equals("number")) {
                        q0Var = q0.f6778i;
                        view.setInputType(q0Var);
                    }
                    throw new JSApplicationIllegalArgumentException("Forbidden input type value");
                case 3556653:
                    break;
                case 96619420:
                    if (inputType.equals("email")) {
                        q0Var = q0.f6779v;
                        view.setInputType(q0Var);
                    }
                    throw new JSApplicationIllegalArgumentException("Forbidden input type value");
                case 106642798:
                    if (inputType.equals("phone")) {
                        q0Var = q0.f6777e;
                        view.setInputType(q0Var);
                    }
                    throw new JSApplicationIllegalArgumentException("Forbidden input type value");
                default:
                    throw new JSApplicationIllegalArgumentException("Forbidden input type value");
            }
        }
        q0Var = q0.f6776d;
        view.setInputType(q0Var);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setPlaceholder(@NotNull r0 view, String placeholder) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (placeholder != null) {
            view.setPlaceholder(placeholder);
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setShouldShowHintSearchIcon(@NotNull r0 view, boolean shouldShowHintSearchIcon) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setShouldShowHintSearchIcon(shouldShowHintSearchIcon);
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setText(r0 view, String text) {
        if (view != null) {
            view.j(text);
        }
    }

    @Override // com.facebook.react.viewmanagers.RNSSearchBarManagerInterface
    public void setTextColor(@NotNull r0 view, Integer color) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setTextColor(color);
    }
}
