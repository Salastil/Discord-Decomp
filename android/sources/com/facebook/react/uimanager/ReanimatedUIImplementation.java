package com.facebook.react.uimanager;

import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.uimanager.events.EventDispatcher;
import java.util.List;

/* loaded from: classes3.dex */
public class ReanimatedUIImplementation extends UIImplementation {
    public ReanimatedUIImplementation(ReactApplicationContext reactApplicationContext, ViewManagerResolver viewManagerResolver, EventDispatcher eventDispatcher, int i5) {
        this(reactApplicationContext, new ViewManagerRegistry(viewManagerResolver), eventDispatcher, i5);
    }

    @Override // com.facebook.react.uimanager.UIImplementation
    public void manageChildren(int i5, ReadableArray readableArray, ReadableArray readableArray2, ReadableArray readableArray3, ReadableArray readableArray4, ReadableArray readableArray5) {
        super.manageChildren(i5, readableArray, readableArray2, readableArray3, readableArray4, readableArray5);
    }

    public ReanimatedUIImplementation(ReactApplicationContext reactApplicationContext, List<ViewManager> list, EventDispatcher eventDispatcher, int i5) {
        this(reactApplicationContext, new ViewManagerRegistry(list), eventDispatcher, i5);
    }

    public ReanimatedUIImplementation(ReactApplicationContext reactApplicationContext, ViewManagerRegistry viewManagerRegistry, EventDispatcher eventDispatcher, int i5) {
        super(reactApplicationContext, viewManagerRegistry, new UIViewOperationQueue(reactApplicationContext, i5), eventDispatcher);
    }
}
