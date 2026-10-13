package com.facebook.react.animated;

import a3.e;
import android.view.View;
import com.facebook.react.bridge.JSApplicationIllegalArgumentException;
import com.facebook.react.bridge.JavaOnlyMap;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.bridge.UIManager;
import fo.q;
import fo.r;
import java.util.LinkedHashMap;
import java.util.Map;
import ki.b;
import kotlin.Metadata;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\b\b\u0000\u0018\u00002\u00020\u0001B\u0017\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0004\b\u0006\u0010\u0007J\u0018\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\t2\b\u0010\u0018\u001a\u0004\u0018\u00010\u0010J\u000e\u0010\u0019\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\tJ\u0006\u0010\u001a\u001a\u00020\u0016J\u0006\u0010\u001b\u001a\u00020\u0016J\r\u0010\u001c\u001a\u00020\fH\u0010¢\u0006\u0002\b\u001dR\u000e\u0010\u0004\u001a\u00020\u0005X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\n\u001a\u000e\u0012\u0004\u0012\u00020\f\u0012\u0004\u0012\u00020\t0\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u0082\u000e¢\u0006\u0002\n\u0000R\u0013\u0010\u0011\u001a\u0004\u0018\u00010\u00128F¢\u0006\u0006\u001a\u0004\b\u0013\u0010\u0014¨\u0006\u001e"}, d2 = {"Lcom/facebook/react/animated/PropsAnimatedNode;", "Lcom/facebook/react/animated/AnimatedNode;", "config", "Lcom/facebook/react/bridge/ReadableMap;", "nativeAnimatedNodesManager", "Lcom/facebook/react/animated/NativeAnimatedNodesManager;", "<init>", "(Lcom/facebook/react/bridge/ReadableMap;Lcom/facebook/react/animated/NativeAnimatedNodesManager;)V", "connectedViewTag", "", "propNodeMapping", "", "", "propMap", "Lcom/facebook/react/bridge/JavaOnlyMap;", "connectedViewUIManager", "Lcom/facebook/react/bridge/UIManager;", "connectedView", "Landroid/view/View;", "getConnectedView", "()Landroid/view/View;", "connectToView", "", "viewTag", "uiManager", "disconnectFromView", "restoreDefaultValues", "updateView", "prettyPrint", "prettyPrint$ReactAndroid_release", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nPropsAnimatedNode.kt\nKotlin\n*S Kotlin\n*F\n+ 1 PropsAnimatedNode.kt\ncom/facebook/react/animated/PropsAnimatedNode\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,107:1\n1#2:108\n*E\n"})
/* loaded from: classes3.dex */
public final class PropsAnimatedNode extends AnimatedNode {
    private int connectedViewTag;
    private UIManager connectedViewUIManager;

    @NotNull
    private final NativeAnimatedNodesManager nativeAnimatedNodesManager;

    @NotNull
    private final JavaOnlyMap propMap;

    @NotNull
    private final Map<String, Integer> propNodeMapping;

    public PropsAnimatedNode(@NotNull ReadableMap config, @NotNull NativeAnimatedNodesManager nativeAnimatedNodesManager) {
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(nativeAnimatedNodesManager, "nativeAnimatedNodesManager");
        this.nativeAnimatedNodesManager = nativeAnimatedNodesManager;
        this.connectedViewTag = -1;
        this.propMap = new JavaOnlyMap();
        ReadableMap map = config.getMap("props");
        ReadableMapKeySetIterator keySetIterator = map != null ? map.keySetIterator() : null;
        this.propNodeMapping = new LinkedHashMap();
        while (keySetIterator != null && keySetIterator.hasNextKey()) {
            String nextKey = keySetIterator.nextKey();
            this.propNodeMapping.put(nextKey, Integer.valueOf(map.getInt(nextKey)));
        }
    }

    public final void connectToView(int viewTag, UIManager uiManager) {
        if (this.connectedViewTag != -1) {
            throw new JSApplicationIllegalArgumentException(e.f(this.tag, this.connectedViewTag, "Animated node ", " is already attached to a view: "));
        }
        this.connectedViewTag = viewTag;
        this.connectedViewUIManager = uiManager;
    }

    public final void disconnectFromView(int viewTag) {
        int i5 = this.connectedViewTag;
        if (i5 != viewTag && i5 != -1) {
            throw new JSApplicationIllegalArgumentException(e.f(viewTag, this.connectedViewTag, "Attempting to disconnect view that has not been connected with the given animated node: ", " but is connected to view "));
        }
        this.connectedViewTag = -1;
    }

    public final View getConnectedView() {
        Object i5;
        try {
            q qVar = Result.f13476e;
            UIManager uIManager = this.connectedViewUIManager;
            i5 = uIManager != null ? uIManager.resolveView(this.connectedViewTag) : null;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = b.i(th2);
        }
        return (View) (i5 instanceof r ? null : i5);
    }

    @Override // com.facebook.react.animated.AnimatedNode
    @NotNull
    public String prettyPrint$ReactAndroid_release() {
        int i5 = this.tag;
        int i6 = this.connectedViewTag;
        Map<String, Integer> map = this.propNodeMapping;
        JavaOnlyMap javaOnlyMap = this.propMap;
        StringBuilder q5 = e.q(i5, "PropsAnimatedNode[", i6, "] connectedViewTag: ", " propNodeMapping: ");
        q5.append(map);
        q5.append(" propMap: ");
        q5.append(javaOnlyMap);
        return q5.toString();
    }

    public final void restoreDefaultValues() {
    }

    public final void updateView() {
        if (this.connectedViewTag == -1) {
            return;
        }
        for (Map.Entry<String, Integer> entry : this.propNodeMapping.entrySet()) {
            String key = entry.getKey();
            AnimatedNode nodeById = this.nativeAnimatedNodesManager.getNodeById(entry.getValue().intValue());
            if (nodeById == null) {
                throw new IllegalArgumentException("Mapped property node does not exist");
            }
            if (nodeById instanceof StyleAnimatedNode) {
                ((StyleAnimatedNode) nodeById).collectViewUpdates(this.propMap);
            } else if (nodeById instanceof ValueAnimatedNode) {
                ValueAnimatedNode valueAnimatedNode = (ValueAnimatedNode) nodeById;
                Object objectValue = valueAnimatedNode.getObjectValue();
                if (objectValue instanceof Integer) {
                    this.propMap.putInt(key, ((Number) objectValue).intValue());
                } else if (objectValue instanceof String) {
                    this.propMap.putString(key, (String) objectValue);
                } else {
                    this.propMap.putDouble(key, valueAnimatedNode.getValue());
                }
            } else if (nodeById instanceof ColorAnimatedNode) {
                this.propMap.putInt(key, ((ColorAnimatedNode) nodeById).getColor());
            } else {
                if (!(nodeById instanceof ObjectAnimatedNode)) {
                    throw new IllegalArgumentException(e.i(nodeById.getClass(), "Unsupported type of node used in property node "));
                }
                ((ObjectAnimatedNode) nodeById).collectViewUpdates(key, this.propMap);
            }
        }
        UIManager uIManager = this.connectedViewUIManager;
        if (uIManager != null) {
            uIManager.synchronouslyUpdateViewOnUIThread(this.connectedViewTag, this.propMap);
        }
    }
}
